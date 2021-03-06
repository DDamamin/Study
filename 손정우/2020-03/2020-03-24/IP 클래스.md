### IP 클래스

기업, 기관, 단체 등에서 많은 IP를 유연하게 관리기위해 IP에 클래스를 나눠놨다.

클래스를 나누기위해 IP는 네트워크 주소와 호스트 주소로 나뉜다.

앞에서 몇비트는 네트워크를 나누는 네트워크 주소와 뒤의 나머지 비트는 기기를 나누는 호스트 주소로 나뉜다.

한 단체에게 네트워크 주소를 할당해 주면 단체에서 호스트 주소를 각 기계에게 나눠주어 관리할 수 있다.

클래스에는 A, B, C, D, E 클래스가 있으며 주로 일반적으로 A, B, C 클래스가 사용된다.
각 클래스마다 네트워크 주소의 크기와 시작 비트가 다르다.

| 클래스   | 네트워크 주소 크기 | 시작 비트 |
| -------- | ------------------ | --------- |
| A 클래스 | 1Byte              | 0         |
| B 클래스 | 2Byte              | 10        |
| C 클래스 | 3Byte              | 110       |

*218.149.52.177* 이 ip 주소를 예시로 보자
일단 이를 비트로 변환하자

| 1         | 2         | 3         | 4         |
| --------- | --------- | --------- | --------- |
| 1101 1010 | 1001 0101‬ | 0011 0100‬ | 1011 0001‬ |

우선 110으로 시작한다. 그럼 C 클래스임을 알 수가 있다.
그리고 C 클래스는 3Byte를 네트워크 주소로 사용한다.

네트워크 주소의 크기에 따라 호스트 주소의 크기가 달라진다.
따라서 학교나 정부 기관 같은 많은 양의 기기를 가지는 곳은 A, B 클래스를 가정에는 C 클래스를 공급할 수 있다.

A 클래스는 2^24개로 16,777,216개

B 클래스는 2^16개로 65,536‬개

C 클래스는 2^8개로 256개

단 저 만큼의 호스트를 모두 사용할 수 없다.
이는 몇몇 아이피는 특수한 목적을 위해 빼놨기 때문이다. (브로드캐스트 등)



### 서브넷 마스크

이렇게 클래스를 나눠놨는데 문제는 C 클래스와 B 클래스 사이에 격차가 너무 크다는 거다.
C를 사용하기엔 너무 적고 B를 사용하기엔 너무 많다. 그냥 B 클래스를 사용하기에는 IP 주소가 낭비되기 때문이다.

그래서 나온 것이 네트워크를 다시 서브넷들로 나누는 것이다.
이를 가능하게 하는 것이 서브넷 마스크다.
IP주소에 마스크 연산을 취해 네트워크 주소를 늘릴 수 있다.

다시 128.149.52.177 주소를 보자

| 1        |          | 2        |          | 3        |          | 4      |        |
| -------- | -------- | -------- | -------- | -------- | -------- | ------ | ------ |
| 1101     | 1010     | 1001     | 0101‬     | 0011     | 0100‬     | 1011   | 0001‬   |
| 네트워크 | 네트워크 | 네트워크 | 네트워크 | 네트워크 | 네트워크 | 호스트 | 호스트 |

여기서 우리는 4비트만 호스트 주소로 사용하고 싶다면 아래와 같은 마스크 비트를 사용할 수 있다.

| 1    |      | 2    |      | 3    |      | 4    |      |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 1101 | 1010 | 1001 | 0101‬ | 0011 | 0100‬ | 1011 | 0001‬ |
| 1111 | 1111 | 1111 | 1111 | 1111 | 1111 | 1111 | 0000 |

이후 마스크 작업을 하고나면 128.149.52.176이라는 서브넷 네트워크 주소가 나온다.
그럼 이젠 뒤의 4비트만 호스트 주소로 사용할 수 있다.
이런식으로 서브넷 마스크와 함께 ip를 분배하면 우리는 보다 원하는 사용량만 사용할 수 있다.

그리고 서브넷 마스크는 각 클래스의 네트워크 주소 크기 만큼은 앞에서부터 1로 채워야한다.

즉 A 클래스는 1byte가 네트워크 주소 크기이므로 서브넷 마스크는 최소 255.0.0.0이 되어야 한다.
그래야 네트워크 주소의 크기가 더 작아지지 않기 때문이다.