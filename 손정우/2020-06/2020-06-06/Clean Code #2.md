# Clean Code #2

### 의미있는 코드

- 의도를 가지는 이름을 지어라
  1. 이름에서 그 의도와 정보가 드러나게 해라
  2. 검색하기 쉬운 이름을 지어라 (숫자보단 상수 등)
  3. 클래스는 명사(구)를 메서드는 동사(구)를 사용해라
  4. 하나의 이름으로 의도가 분명하지 않다면 의미있는 맥락을 추가해라
  5. 이름은 짧을 수록 좋지만 의도가 드러나지 않는다면 긴 이름이 훨씬 낫다
- 헷갈리게 하지 마라
  1. 그릇된 정보를 피해라 (실제 List가 아닌데 List라는 이름이 붙이지 않기 등)
  2. 의미있게 구분해라 (다른 두 개념이 같은 이름 일 때 예를 들어 class라는 이름일 때 klass등을 사용하지 마라)
  3. 발음하기 쉬운 이름으로 해라
  4. 인코딩을 피해라 (헝가리식 표기와 같이 타입이나 범위 등의 정보를 이름에 담지 마라)
  5. 자기만 알거나 특정 문화에 국한된 기발한 이름을 피해라
  6. 한 개념에 한 단어만 사용해라 (get이면 모든 get이 get)
  7. 일관성 등 때문에 말장난 하지 마라 (add이 두 인수를 더하는 것일 때 리스트에 추가를 add로 이름 짓지 않기)
  8. 프로그래머에게 친숙한 단어를 사용해라
  9. 8에 해당하기 힘들다면 문제 영역에서 가져와라 (이 경우 전문가에게 묻는다면 바로 알 수 있기 때문이다)
  10. 불필요한 맥락을 없애라 (모든 클래스에 서비스 명 붙이기)