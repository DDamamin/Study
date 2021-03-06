# Windows API 정복 1권(김상형 저) 정리 12편

**저작권 문제시 연락주시면 바로 처리하도록 하겠습니다. 학생으로서 독서를 읽은 뒤 정리하면서 학습하는 용도로만 사용하였습니다. 양해 부탁드립니다.**

## TextOut

데이터를 가공하여 결과를 보여주는 일이 프로그램의 당연한 임무라고 할 때 외부로부터 데이터를 받아들이는 입력(input)과 처리한 결과를 외부로 보여주는 출력(output)은 가장 기본적인 절차에 해당한다.  
그 중에서도 출력이 좀 더 쉽기 때문에 Windows 프로그래밍에 입문하는 사람이 가장 먼저 대하는 함수가 문자열을 출력하는 TextOut 함수이며 콘솔의 printf에 해당하는 함수이다.  
  
    BOOL TextOut(HDC hdc, int nXStart, int nYStart, LPCTSTR lpString, int cbString);

첫 번째 인수는 당연히 DC의 핸들인 hdc이다.  
이 함수뿐만 아니라 화면에 무엇인가를 출력하는 모든 함수들의 첫 번째 인수는 항상 hdc이다.  
이 DC는 GetDC나 BeginPrint 함수에 의해 구해졌을 것이다.  
  
(nXStart, nYStart)는 문자열이 출력될 좌표이며 윈도우의 작업영역 원점을 기준으로 한다.  
  
세 번째 인수 lpString은 출력할 문자열을 담고 있는 문자열 포인터이며 마지막 인수 cbString이 출력할 문자열의 길이이다.  
예제에서는 다음 호출문을 사용하여 문자열을 출력하였다.  
  
    TextOut(hdc, 100, 100, TEXT("Beautiful Korea"), 15);

**TextOut 함수는 널 종료 문자열을 인식하지 않으므로, 출력할 문자열의 길이를 인수로 반드시 밝혀야 한다.**  
문자열 길이를 일일이 세는 것은 번거롭기도 하지만 이식성에도 불리하다.  
예를 들어 "대한민국은"은 멀티바이트에서는 길이가 8바이트이지만 유니코드에서는 4문자로 계산된다.  
그래서 통상 문자열 상수를 직접 출력하지 않고 문자 배열과 lstrlen 함수를 함께 사용하여 전체 문자열을 출력한다.  
이렇게 하면 출력 문자열이 바뀔 때마다 길이를 직접 세지 않아도 되므로 편리하고 문자 설정이 바뀌면 길이도 같이 바뀌므로 안전하다.  
  
    const TCHAR* str = TEXT("Beautiful Korea");
    TextOut(hdc, 100, 100, str, lstrlen(str));

이 호출문을 말로 풀어 본다면 "Beautiful Korea"라는 15자 길이의 문자열을 (100, 100) 좌표에 출력하라는 뜻이다.  
문자열 변수를 선언하는 것이 귀찮다면 다음과 같이 래퍼를 만들어 사용하면 된다.  
문자열을 넘기기만 하면 길이 계산을 알아서 할 것이다.  
  
    void MyTextOut(HDC hdc, int x, int y, LPCTSTR Text)
    {
        TextOut(hdc, x, y, Text, lstrlen(Text));
    }

출력에 필요한 기타 정보들은 모두 hdc에서 지정하는 정보를 사용한다.  
hdc의 정보를 변경하면 문자의 모양이나 크기, 색상, 정렬 상태, 좌표 해석 방법 등의 여러 가지 변화를 줄 수 있는데 여기서는 간단하게 정렬 상태를 변경하는 방법에 대해서만 알아보자.  
문자열의 정렬 방법을 변경하는 함수는 SetTextAligm이라는 함수이다.  
  
    UINT SetTextAlign(HDC hdc, UINT fMode);

보다시피 이 함수도 첫 번째 인수로 DC의 핸들 즉, hdc를 받아들이고 있다.  
출력 함수뿐만 아니라 출력에 관계된 모든 함수의 첫 번째 인수는 예외없이 hdc이다.  
두 번째 인수 fMode가 지정하는 정렬 정보에 따라 hdc의 정렬 상태를 변경하며 이후부터 hdc를 참조하여 출력되는 모든 문자열은 이 함수가 지정한 정렬 상태를 따른다.  
fMode의 값은 다음과 같으며 두 개 이상의 플래그를 OR로 연결하여 지정한다.  
  
값 | 설명
---|-----
TA_TOP | 지정한 좌표가 상단 좌표가 된다.
TA_BOTTOM | 지정한 좌표가 하단 좌표가 된다.
TA_CENTER | 지정한 좌표가 수평 중앙 좌표가 된다.
TA_LEFT | 지정한 좌표가 수평 왼쪽 좌표가 된다.
TA_RIGHT | 지정한 좌표가 수평 오른쪽 좌표가 된다.
TA_UPDATECP | 지정한 좌표대신 CP를 사용하며 문자열 출력 후에 CP를 변경한다.
TA_NOUPDATECP | CP를 사용하지 않고 지정한 좌표를 사용하며 CP를 변경하지 않는다.

디폴트 정렬 상태는 TA_TOP | TA_LEFT로 되어 있으며 지정한 좌표를 좌상단으로 하여 문자열이 출력된다.  
물론 정렬 상태를 변경하면 지정한 좌표를 문자열의 어느 지점으로 사용할 것인가를 변경할 수 있다.  
  
수평 정렬 위치를 변경하는 플래그가 좌, 우, 중앙 세 개 있고 수직 정렬 위치를 변경하는 플래그가 상단, 하단 두 개가 있다.  
수직 중앙 정렬 기능은 없으므로 출력 좌표를 직접 조정하는 수밖에 없다.  
이런 정렬 옵션을 사용하면 다음과 같이 여러 개의 문자열을 중앙 정렬하여 출력할 수 있다.  
  
    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);
        SetTextAlign(hdc, TA_CENTER);
        TextOut(hdc, 200, 60, TEXT("Beautiful Korea"), 15);
        TextOut(hdc, 200, 80, TEXT("is My"), 5);
        TextOut(hdc, 200, 100, TEXT("Lovely Home Country"), 19);
        EndPaint(hWnd, &ps);
        return 0;

TextOut 출력을 하기 전에 SetTextAlign 함수로 중앙 정렬하였다.  
  
수평 좌표값을 모두 200으로 주었지만 이 좌표를 문자열의 중앙 좌표로 해석하도록 지정했기 때문에 문자열이 모두 수평 위치 200을 기준으로 중앙 정렬되었다.  
만약 이런 중앙 정렬없이 왼쪽 정렬만 가능하다면 문자열의 길이에 따라 출력 시작 위치를 일일이 계산하여 적당히 왼쪽으로 옮겨서 출력해야만 할 것이다.  
DC에 대한 속성 변경은 항상 그 후의 출력에만 영향을 미친다.  
위 코드에서 SetTextAlign문을 첫 번째 TextOut 아래로 옮기면 두 번째 출력 이후부터만 중앙으로 출력된다.  
  
"Beautiful Korea" 출력문은 왼쪽으로 정렬되므로 200 좌표가 문자열의 시작 좌표가 되고 나머지 두 문자열은 200이 중앙이 되게끔 출력되었다.  
다음은 똑같은 코드를 사용하되 정렬을 왼쪽, 오른쪽으로 지정한 것이다.  
  
정렬 위치를 지정하는 플래그 외에 두 개의 플래그가 더 있는데 이 플래그들은 CP(Current Position)의 사용 여부를 결정한다.  
텍스트 모드에서 다음 문자가 출력될 위치를 커서(Cursor)가 표시하듯이 그래픽 모드에서는 다음 그래픽이 출력될 위치를 CP가 가지고 있다.  
물론 CP는 내부적으로 유지되는 좌표일 뿐 커서처럼 화면에서 깜박거리지는 않는다.  
TA_UPDATECP 플래그를 사용하면 출력 위치를 지정하는 인수를 무시하고 항상 CP의 위치에 문자열을 출력하며 출력 후에 CP를 문자열의 바로 다음 위치로 옮긴다.  
그래서 이 플래그를 사용하면 다음과 같이 여러 번 TextOut을 호출하여 문장을 이어서 출력할 수도 있다.  
  
    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);
        SetTextAlign(hdc, TA_UPDATECP);
        TextOut(hdc, 200, 60, TEXT("One "), 4);
        TextOut(hdc, 200, 80, TEXT("Two "), 4);
        TextOut(hdc, 200, 100, TEXT("Three"), 5);
        EndPaint(hWnd, &ps);
        return 0;

TextOut의 인수의 좌표를 지정하는 값들이 있지만 이 좌표는 사용되지 않고 무시되며 무조건 CP 위치에 출력하므로 일직선으로 세 개의 문자열이 출력된다.  
이 기능을 사용하면 콘솔에 printf로 출력하듯이 문자열을 연속적으로 출력할 수 있다.  
  
Windows 환경에서 TextOut 출력문은 오로지 문자열만 다룰 수 있다.  
정수나 실수를 출력하는 함수는 따로 없으므로 sprintf나 wsprintf 같은 함수로 서식화하여 문자열로 만들어서 출력해야 한다.  
예를 들어 Score라는 정수형 변수의 값을 화면으로 출력하고 싶다면 다음과 같이 출력한다.  
  
    TCHAR str[128];
    int Score = 85;
    wsprintf(str, TEXT("현재 점수는 %d점입니다."), Score);
    TextOut(hdc, 10, 10, str, lstrlen(str));

문자열 조립을 위한 임시 버퍼를 선언하고 wsprintf 함수로 이 버퍼에 정수값을 조립하여 문자열 형태로 만든 후 TextOut으로 출력하였다.  
정수 출력이 다소 번거로운데 원한다면 서식 조립과 출력을 한꺼번에 할 수 있는 사용자 정의 함수를 만들어 쓰면 된다.  
wsprintf는 API 함수이므로 용량상의 불이익이 없고 유니코드를 지원한다는 장점이 있기는 하지만 실수를 서식화할 수 없고 버퍼 길이가 1024까지만 지원된다는 단점이 있다.  
실수는 sprintf 함수나 유니코드 버전의 swprintf를 사용해야 한다.