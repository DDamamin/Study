# Chapter 6. 익스프레스 웹 서버 만들기

## 6.1 Express-generator로 빠르게 설치하기

프레임워크에 필요한 package.json을 만들어주고 기본 폴더 구조까지 잡아주는 패키지가 바로 Express-generator입니다.

app.js 파일이 핵심적인 서버 역할을 합니다.
bin 폴더의 www파일은 서버를 실행하는 스크립트입니다.
public 폴더는 외부(브라우저 등의 클라이언트)에서 접근 가능한 파일들을 모아둔 곳입니다.
routes 폴더는 주소별 라우터들을 모아둔 곳이고, views 폴더는 템플릿 파일을 모아둔 곳입니다.

## 6.2 익스프레스 구조 이해하기

익스프레스는 코드가 여러 개의 파일로 분산되어 있습니다.
각 부분마다 맡은 역할이 나누어져 있어 보기에도 좋고, 관리하기도 좋습니다.

bin/www 파일은 http 모듈에 express 모듈을 연결하고, 포트를 지정하는 부분입니다.

## 6.3 미들웨어

미들웨어는 요청과 응답의 중간(middle, 미들)에 위치하여 미들웨어라 부릅니다.
미들웨어는 요청과 응답을 조작하여 기능을 추가하기도 하고, 나쁜 요청을 걸러내기도 합니다.

미들웨어는 주로 app.use와 함께 사용됩니다.

app.use 메서드의 인자로 들어 있는 함수가 미들웨어입니다.
미들웨어는 use 메서드로 app에 장착합니다.
제일 위의 logger('dev')부터 시작하여 미들웨어들을 순차적으로 거친 후 라우터에서 클라이언트로 응답을 보냅니다.

라우터와 에러 핸들러도 미들웨어의 일종입니다.

### 6.3.1 커스텀 미들웨어 만들기

서버가 받은 요청은 미들웨어를 타고 라우터까지 전달됩니다.

반드시 미들웨어 안에서 next()를 호출해야 다음 미들웨어로 넘어갑니다.
next()는 미들웨어의 흐름을 제어하는 핵심적인 함수입니다.

next 함수에 인자를 아무것도 넣지 않으면 단순하게 다음 미들웨어로 넘어갑니다.
next 함수의 인자로 route를 넣으면 특수한 기능을 합니다.
route 외의 다른 값을 넣으면 다른 미들웨어나 라우터를 건너 뛰고 바로 에러 핸들러로 이동합니다.
넣어준 값은 에러에 대한 내용으로 간주됩니다.

에러 핸들링 미들웨어는 일반적으로 미들웨어 중 제일 아래에 위치하여 위에 있는 미들웨어에서 발생하는 에러를 받아서 처리합니다.

### 6.3.2 morgan

요청에 대한 정보를 콘솔에 기록해줍니다.

함수의 인자로 dev 대신 short, common, combined 등을 줄 수 있습니다.
인자에 따라 콘솔에 나오는 로그가 다릅니다.

### 6.3.3 body-parser

요청의 본문을 해석해주는 미들웨어입니다.

body-parser는 JSON과 URL-encoded 형식의 본문 외에도 Raw, Text 형식의 본문을 추가로 해석할 수 있습니다.

Raw는 본문이 버퍼 데이터일 때, Text는 본문이 텍스트 데이터일 때 해석하는 미들웨어입니다.

JSON은 JSON 형식의 데이터 전달 방식이고, URL-encoded는 주소 형식으로 데이터를 보내는 방식입니다.
보통 폼 전송이 URL-encoded 방식을 주로 사용합니다.

body-parser 패키지는 내부적으로 본문을 해석해 req.body에 추가해줍니다.
