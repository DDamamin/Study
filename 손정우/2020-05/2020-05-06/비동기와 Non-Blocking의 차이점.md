# 비동기와 Non-Blocking의 차이점

비동기와 Non-Blocking은 우리가 같은 목적을 이루는데 사용하므로 이 둘을 혼동하기 쉽다.

하지만 차이점은 존재한다. Non-Blocking은 비동기를 구현하는 하나의 방법이다.



비동기는 한마디로 동시성을 가지는 전체적인 코드 흐름을 말한다. 즉 여러개의 코드 뭉치들이 독립적이고 동시적으로 실행될 수 있다는 것이다.

이러한 비동기를 구현하는 방법은 스레드를 사용하거나 프로그램과 독립적인 시스템(운영체제, 다른 프로세서 등)을 사용하면 된다. 그리고 이렇게 비동기적으로 작동하는 작업의 상태를 확인하는 방법으로 Polling이라는 방법이 있다. 이는 진행중인 작업의 상태를 작업이 끝나기를 기다리지 않고 바로 얻어낸다.

그리고 다시 이 Polling을 구현하는 방법 중 Non-Blocking이 있다. 이는 해당 작업이 끝났다면 그 결과를 그렇지 않다면 미리 약속된 어떤 값을 반환하는 함수를 말한다.

즉 Non-Blocking은 비동기 작업의 상태를 확인하는 방법을 구현하는 하나의 방법이다.