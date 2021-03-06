## What is Web [Front-end]

### 웹이란?

#### 인터넷이란

* 전세계의 컴퓨터들이 네트워크를 통해 연결되어, 통신을 할 수 있는 가장 거대한 네트워크.

* 초기에는 군사적 목적으로 만들어졌다. (inter{그들끼리만, 사이에} + net{그물} => 넓게 펼쳐진 그물과 같은 연결 사이에 소통이 가능하게 해주는 기능)
* 핵전쟁으로 인해 일부 서버가 파괴되어도 자료의 안전성을 확보하기 위하여 인터넷을 이용하여 분산 저장
* 패킷 교환 방식을 채택하여 ARPANET이라는 통신망을 만듦
* NCP 패킷 송출 방법을 사용하였으나, 1983년 1월 1일부터 TCP/IP 패킷 송출 방법으로 전환하였다.
  * NCP는 고정된 목적지를 제외한 주소를 표현할 수 없었다.
  * 에러 처리가 불완전해서 멈추는 일이 많았다.

* 후에 미국과학재단에서 NSFnet을 만들고 ARPANET이 흡수통합 되면서, 국제 통신망으로 발전했다.



#### 웹이란

* 인터넷이라는 네트워크 상에서 HTML이라는 언어를 바탕으로 페이지를 통신할 수 있도록 고안된 서비스.



##### 웹의 3대 기능

* 통일된 웹 자원의 위치 지정 방법. URL
* 웹의 자원 이름에 접근하는 프로토콜. HTTP
* 자원들 사이를 쉽게 항해할 수 있는 언어. HTML



##### 웹의 4대 요소

* 웹 브라우저 - 정보를 주고 받을 수 있는 도구
* 웹 서버 - 정보를 제공하는 서버
* HTTP - 웹 브라우저와 웹 서버를 통신하게 해주는 HTTP
* HTML 웹 브라우저 화면에 출력되는 정보를 체계화하는 HTML



#### 웹의 역사

##### 웹의 개발

* 웹은 1989년에 물리학자 간의 정보교환 및 공동연구를 위해 고안되었다.
* 처음에는 연구소 내부에서만 사용되었다.
* 1991년 8월 6일 뉴스를 통해 이 프로젝트를 알리며 대중화가 되었다.



##### 웹의 발전

* 초창기에는 글자 기반이던 웹 브라우저에 그래픽이 도입되고, 마우스가 보편화가 되어 링크를 클릭하는 방식으로 발전했다. 
* HTML의 발전과 웹 검색등이 등장하며 정보를 찾는 일이 쉬워졌고.
* 2000년 전후로 웹 기반 온라인 거래와 SNS가 성장하며 새로운 시장이 열렸다. 



##### 웹 1.0

* 디렉토리 검색 (서칭을 통한 자료 탐색)

##### 웹 2.0

* 정보의 쌍방향 소통

##### 웹 3.0 

* 지능형 웹 기술





### 프론트 엔드란?

* 기획에서부터 관여해 화면 구성과 로직에 대해 짜는 사람
* 모든 디바이스를 대응할 수 있도록 기획과 디자인에 관여하는 사람
* 화면 설계를 하며 모든 디바이스를 맞춰야 하는 사람
* UI/접근성/표준에 대해 숙지하고 맞춰야 하는 사람
* 기획/디자인/백엔드의 연결 고리가 되는 사람
* 웹 페이지 성능 최적화에 가장 영향을 미치는 사람
* 웹 트렌드에 민감해야 하는 사람



### 프론트 엔드의 필요 지식

* 기획
* 디자인
* Back end
* 접근성
* 권고안
* 웹 구동 방식



### 프론트 엔드의 요소

* HTML, CSS, JavaScript



#### HTML (Hyper Text Markup Language)

##### Hyper Text

* 독자가 하이퍼링크를 통해 한 문서에서 다른 문서로 접근할 수 있는 텍스트

##### Markup Language

* 태그 등을 이용하여 문서나 데이터의 구조를 명시하는 언어

##### HTML

* 하이퍼 텍스트로 이루어진 데이터 체계를 명시하는 언어



#### CSS (Cascading Style Sheets)





#### JavaScript



##### JQuery



##### React



### 프론트 엔드의 역사

#### HTML의 역사

##### 1세대

* 정적인 문서
* 링크를 클릭해야만(하이퍼링크) 화면이 움직임

##### 2세대

* 닷컴붐 때, 소프트웨어를 유통하기 위해 동적인 기능을 구현할 필요성을 느끼고 JS가 만들어짐

##### 3세대

* JS의 동적인 기능이 훨씬 부각됨
* HTML 속에서 구현되던 JS가 메인이 되어, JS 코드 내에서 HTML을 구현할 수 있게 되어 파일 하나로 모든 것을 구현할 수 있게 됨 (Single Page Application : SPA)

##### 4세대

* SPA의 발전으로 인하여 UI/UX를 처리하는 Front-end와 그에 필요한 데이터를 주고 관리하는 Back-end로 나뉘게 된다.



### 웹의 역사 흐름표

#### 1969년

* ARPAnet의 개발. 인터넷의 등장



#### 1978년

* TCP/IPv4의 공개



#### 1983년

* NCP 패킷 전송 방식을 TCP/IP 패킷 전송 방식으로 변환



#### 1986년

* NSFnet의 개발 및 ARPAnet의 통합



#### 1989년

* WWW의 개발



#### 1990년

* 최초의 웹 브라우저 월드 와이드 웹 등장. 후에 넥서스로 이름 변경



#### 1991년 

* WWW의 대중화



#### 1993년

* 대중적 브라우저 모자이크의 출시. 사용자 폭발적 증가
* HTTP 1.0 문서 공표



#### 1994년

* 검색 서비스 야후 등장.



#### 1999년

* 닷컴 버블 



#### 2005년

* Web 2.0

