# CSS - Diner 

> css속성을 조금 더 쉽게 알 수 있는 Diner 게임 답 + 풀이

### 1. plate

### 2. bento

### 3. #fancy

: **아이디 선택자**(아이디 속성을 가지고 있는 태그를 선택한다)

> id 속성은 웹 페이지 내부에서 중복되면 안 된다.

### 4. plate > apple 

: **자손 선택자**

(ex=> 선택자 red > 선택자 blue == 선택자 red의 자손에 위치하는 선택자 blue를 선택한다)

### 5. \#fancy pickle

: **아이디 선택자 + 후손선택자** 

(ex=> 선택자 red 선택자 blue == 선택자 red의 자손에 위치하는 선택자 blue를 선택한다)

### 6. .small

: **클래스 선택자**(특정한 클래스를 가지고 있는 태그를 선택한다)

> id 속성과 다르게 클래스는 중복으로 사용가능하다, 그래서 개발할 때 가장 많이 사용하는 선택자이다.

### 7. orange.small

### 8. bento > orange.small

### 9. plate, bento

### 10. * 

: **모든 태그**를 선택

### 11. plate *

### 12. plate + apple

: +는 **동위선택자**로 바로 뒤에 있는 태그 하나를 선택 

### 13. bento ~ pickle

: ~도 **동위선택자**이지만 뒤에 있는 같은 요소를 다 선택할 수 있다

### 14. plate > apple

: 자손 선택자는 특정 태그 아래에 있는 자손을 선택할 떄 사용한다 

### 15. plate orange:first-child

### 16. plate *:only-child

### 17. #fancy *:last-child , plate + pickle

### 18. plate:nth-child(3)

: nth-child뒤에 괄호를 열고 **몇번째 아이의 속성**을 바꿀 것인지 설정

### 19. bento:nth-last-child(3)

: nth-last-child는 **뒤에서부터** 수를 세기 시작

### 20. apple:first-of-type

: :first-of-type는 **형제 관계 중에서 첫번째로 등장**하는 특정 태그를 선택

### 21. plate:nth-of-type(2n)

### 22. plate:nth-of-type(2n+3)

### 23. plate apple.small:only-of-type

### 24. orange:last-of-type, apple:last-of-type

### 25. bento:empty

: 자식이 없는 bento를 선택 

### 26. apple:not(.small)

### 27. [for]

: for으로 이름이 정해져있는 것들을 선택

### 28. plate[for]

: for로 지정되어 있는 plate를 선택

### 29. [for="Vitaly"]

: for로 지정되어 있는 한 이름을 선택

### 30. [for^="Sa"]

: for로 지정되어 있으면서 시작으로 Sa가 들어가 있는 것을 선택

### 31. [for$="to"]

: for로 지정되어 있으면서 끝으로 to가 들어가 있는 것을 선택

### 32. [for*="obb"]

: for로 지정되어 있으면서 시작과 끝의 특징을 한정지은 것이 아닌 이름 전체에서 obb가 들어가 있는 것을 선택





