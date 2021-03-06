# Adapter 클래스

이벤트 핸들러를 작성할 때, 이벤트 처리에 필요한 메서드의 개수와는 관계없이 해당 이벤트 리스너(인터페이스)에 정의된 모든 추상메서드를 구현해야 한다는 점은 좀 불편한다. 이벤트 리스너를 직접 구현하는 대신에 **Adapter 클래스를 상속받아서 원하는 메서드만 작성(오버라이딩)**하면 된다.

Adapter 클래스는 그저 이벤트 리스너에 정의된 메서드를 아무 내용도 없이 구현해 놓았을 뿐이다. 이벤트 핸들러를 작성할 때 이벤트 리스너를 구현하는 것과 Adapter 클래스를 상속받는 것은 코드를 작성하기 편리하다는 것 외에는 차이가 없다.

```java
requestFocus() // 원하는 Component가 focus를 갖도록 할 수 있다.
selectAll() // TextField 또는 TextArea에 입력된 text 전체를 선택된 상태로 만든다.
setEchoChar(char c) // 실제로 입력된 값을 감추기 위해 화면에 보여질 문자를 지정한다.
```

