## Collection Framework

- Collection Framework란 객체를 저장하고, 검색하고, 삭제할 수 있도록 도와주는 프레임워크를 말한다.
  콜렉션 프레임워크의 대표적인 인터페이스는 List, Set, Map이 있다.
  아마 많은 자바 개발자들이 List, Set, Map과 같은 인터페이스를 구현한 콜렉션 클래스들을
  사용하였을 것이다. 나도 개발을 하면서 많은 List들과 Map들을 사용하였으니 아마 그럴 것이다.
  그만큼 자바에서 콜렉션 프레임워크는 반드시 필요한 존재라는 것을 알 수 있다.

- List, Set, Map은 인터페이스로 이를 구현한 클래스들이 존재한다.
  이들의 종류에는 다음과 같다.

  ```java
  List - ArrayList, Vector, LinkedList
  Set - HashSet, TreeSet
  Map - HashMap, Hashtable, TreeMap, Properties
  ```

  여기서 List와 Set는 어떠한 객체를 저장하고 사용하고 삭제한다는 점에서 비슷하여
  Collection이라는 인터페이스로 묶여있지만 Map은 키와 값을 이용하여 저장하는 방법으로
  List와 Set과는 아예 다른 방법이라서 같이 묶이지 않았다.

- 이제부터 List부터 시작하여 Map까지 알아보도록하겠다.





### 1. List

- List는 콜렉션 프레임워크 중에 하나로서 가장 중요하다고 할 수 있을 정도로 많이 쓰이는 콜렉션이다.
  특징으로는 객체를 저장할때 순서를 유지하면서 차례대로 저장하며
  중복된 값을 허용한다는 특징을 가지고 있다.

- List는 인터페이스로, 이를 구현한 ArrayList, Vector, LinkedList가 있다.
  List는 비슷한 세 개의 List 종류들에게 모두 포함되는 추상 메소드들을 가지고 있는데
  그는 다음과 같다.

  ```java
  boolean add(E e)					e를 마지막에 추가
  void add(int index, E element)		element를 index에 추가
  E set(int index, E element)			index에 있는 요소를 element로 변경하고 기존의 요소를 리턴
  boolean contains(Object o)			o가 List의 요소에 존재하는지 여부를 리턴
  E get(int index)					index에 있는 요소를 리턴
  boolean isEmpty()					List가 비어있는지 여부를 리턴
  int size()							List의 크기를 리턴
  void clear()						List안의 모든 요소를 삭제
  E remove(int index)					index에 있는 요소를 삭제 후 리턴
  boolean remove(Object o)			o가 있으면 삭제하고 true, 없으면 false
  ```

- 이렇게 많은 추상 메소드들이 존재한다.
  하지만 ArrayList, Vector, LinkedList가 각각 다른 기능들을 가지고 있다.
  아래에서 하나하나씩 살펴보자.



#### 1-1 ArrayList

- ArrayList는 이름 그대로 배열을 기반으로한 List를 생성한다.
  하지만 배열이라는 것 자체가 불변성을 가지고 있기 때문에 사용하기 힘들 것이라고 생각할 수 있지만
  내부적으로 배열을 사용할뿐 size가 더 클 필요가 있다면 더 늘릴 수 있다.
  처음 ArrayList를 생성하면 기본적으로 10이라는 크기를 가지고 있다.
  인덱스는 0부터 시작해서 9까지 존재하는 것이다.
  size가 사용할때마다 계속 늘어난다고 해서 마냥 좋은 것은 아니다.
  size가 늘어나는 만큼 오버헤드가 발생하기 때문이다.
  size가 늘어날때는 두 배로 늘어난다.
  그래서 이러한 오버헤드를 막기 위해서 ArrayList를 생성할때 매개변수로 size를 넣을 수 있다.
  이를 통해서 오버헤드를 막을 수 있다.

- ArrayList는 제네릭 타입 E를 가지고 있기 때문에 하나의 타입만을 저장할 수 있다.
  자바 5부터 제네릭 타입을 이용하여 ArrayList를 구현했지만 자바 4 이전에는
  제네릭 타입을 사용하지 않았기 때문에 ArrayList의 모든 요소는 Object로 저장되어
  캐스팅이 여러 번 발생하는 오버헤드를 발생시키곤 했다.

- ArrayList에서 오버헤드를 발생시키는 요인은 하나 더 있는데
  그것은 ArrayList에서의 빈번한 삭제이다.
  ArrayList는 내부적으로 배열로 구현되어 있기 때문에
  중간의 하나를 삭제하게 되면 뒤의 요소들이 하나씩 앞당겨지게 된다.
  이에 많은 연산이 필요하므로 오버헤드가 발생할 가능성이 높다.
  따라서 삭제가 빈번하게 일어나는 경우에는 ArrayList를 사용하지 않는 것이 좋다.

- 다음은 ArrayList를 이용한 간단한 예제이다.

  ```java
  public class MainClass {
      public static void main(String[] args) {
          List<Integer> arrayList = new ArrayList<Integer>(10);
          for(int i = 0 ; i < 10 ; i++)
              arrayList.add(i);
          
          for(int i : arrayList)
              System.out.println(i);
      }
  }
  
  // 0
  // 1
  // 2
  // 3
  // 4
  // 5
  // 6
  // 7
  // 8
  // 9
  ```

  

#### 1-2 Vector

- Vector 클래스는 ArrayList와 같은 기능을 가지고 있지만 사용되는 메소드들이
  동기화 (synchronized)되어 있다는 것이 차이점이다.
  따라서 멀티 스레딩을 할때 많이 사용되는 콜렉션이라는 것을 알 수 있다.
  (동기화에 대한 내용은 이전에 많이 설명했으므로 설명하지 않겠다.)
- 동기화라는 점 빼고는 딱히 다른 점이 없다.



#### 1-3 LinkedList

- LinkedList는 ArrayList와 사용방법이 거의 같다.
  하지만 전에 말했듯이 ArrayList는 요소를 빈번하게 삭제하는 경우에
  큰 오버헤드가 발생할 수 있다고 하였다.
  그 단점을 보안한 것이 이 LinkedList이다.
  내부배열과 인덱스를 통해 요소를 관리하는 ArrayList와는 다르게
  링크(주소 - 포이터)를 통해 관리하기 때문에 쉽게 요소를 삽입 삭제할 수 있다.
  물론 LinkedList가 무조건 좋다는 것은 아니다.
  단순히 끝부분에서만 삽입 삭제가 일어난다면 ArrayList가 더 좋을 수 있고
  여러 곳에서 삽입 삭제가 일어난다면 LinkedList가 더 좋을 수도 있다.
  다음은 LinkedList와 ArrayList의 삽입/삭제 시간 차이를 보여주는 예제이다.

  ```java
  public class MainClass {
      public static void main(String[] args) {
          List<Long> arrayList = new ArrayList<>();
          List<Long> linkedList = new LinkedList<>();
          
          long afterTime = 0;
          long beforeTime = 0;
          
          afterTime = System.nanoTime();
          for(long i = 0 ; i < 10000000 ; i++) {
          	arrayList.add(i);
          }
          beforeTime = System.nanoTime();
          System.out.println("ArrayList Time : " + (beforeTime - afterTime)
                             + "(나노세컨드)");
          
          afterTime = System.nanoTime();
          for(long i = 0 ; i < 10000000 ; i++) {
          	linkedList.add(i);
          }
          beforeTime = System.nanoTime();
          System.out.println("LinkedList Time : " + (beforeTime - afterTime)
                             + "(나노세컨드)");
      }
  }
  
  // ArrayList Time : 4433654500(나노세컨드)
  // LinkedList Time : 2886746600(나노세컨드)
  ```

- 이렇게 ArrayList와 LinkedList는 삽입에서 성능차이가 난다는 것을 확인할 수 있었다.





### 2. Set

- Set은 콜렉션 프레임워크 중에 하나로서 List와는 조금 다른 특징을 가지고 있다.
  List는 요소의 순서가 존재하며 중복된 요소를 가질 수 있지만
  Set은 요소의 순서가 없고 중복된 요소를 가질 수 없는 특징을 가지고 있다.
  따라서 index가 없다는 특징을 가지고 있는데
  이 덕분에 더 간단해 보이는 효과를 볼 수 있다.

- 다음은 Set 인터페이스의 구현체인 HashSet, TreeSet의 공통적인 메소드들인데
  index가 있는 List에 비해 간단해진 메소드들을 볼 수 있다.

  ```java
  boolean add(E e)					e가 있으면 false 없으면 저장하고 true를 리턴
  boolean contains(Object o)			o가 있으면 true, 없으면 false를 리턴
  boolean isEmpty()					Set이 비어있으면 true, 아니면 false를 리턴
  Iterator<E> iterator()				Set의 요소를 모두 담고 있는 Iterator 객체 리턴
  int size()							요소의 갯수를 리턴
  void clear()						Set의 모든 요소 삭제
  boolean remove(Object o)			o가 있으면 삭제하고 true, 없으면 false를 리턴
  ```

- Set 콜렉션을 사용할때 값을 얻어내기 위해서는 iterator() 메소드를 사용하여
  Iterator 객체를 이용하거나 forEach(향상된 for문)을 이용해야 한다.
  forEach에 대한 내용은 쉬우니 넘어가고 Iterator 객체를 처음 볼 수도 있을 것 같다.
  사실 forEach가 나오기 전에는 forEach가 사용되는 구간에 Iterator 객체를 사용했었다.

- 마침 얘기가 나온 김에 Iterator 객체에 대한 얘기를 하자면
  Iterator 객체의 주요 메소드는 다음과 같이 세 가지이다.

  ```java
  boolean hasNext()		현재 포인터에 가져올 객체가 있으면 true, 아니면 false를 리턴
  E next()				현재 포인터의 객체를 리턴
  void remove()			현재 포인터의 객체를 삭제
  ```

- Iterator 객체를 사용하는 방법과 향상된 for문을 사용하는 방법의 비교이다.

  ```java
  public class MainClass {
      public static void main(String[] args) {
          Set<String> set = __;
          set.add("aa");
          set.add("bb");
          set.add("cc");
          
          Iterator<String> iterator = set.iterator();
          while(iterator.hasNext()) {
            	System.out.println(iterator.next());
          }
          
          for(String s : iterator) {
              System.out.println(s);
          }
      }
  }
  
  // aa
  // cc
  // bb
  // bb
  // aa
  // cc
  ```

- 나오는데에는 순서가 없다는 것을 확인할 수 있다.



#### 2-1 HashSet

- HashSet은 해쉬코드를 이용해서 '이미 존재하는 객체'를 판별한다.
  객체를 저장할때 이미 저장되어 있는 모든 요소의 hashCode() 메소드를 실행하여
  같은 hashCode를 가진 요소가 있는지 확인하고
  만약 없다면 저장, 있다면 equals()까지 한 뒤 없다면 저장, 있다면 저장하지 않는다.
  이러한 특징을 가진 Set인데 한 번 예제를 보며 살펴보자.

  ```java
  public class MainClass {
      public static void main(String] args) {
          Set<Integer> hashSet = new HashSet<>();
          hashSet.add(10);
          hashSet.add(20);
          hashSet.add(20);
          hashSet.add(30);
          
        	for(int i : hashSet)
              System.out.println(i);
      }
  }
  
  // 20
  // 30
  // 10
  ```

- 빼낼 때에는 순서가 없다는 점과 중복되는 요소를 저장하지 않는 다는 점을 착각하지 말아야 한다.

- HashSet은 내부적으로 hashCode() 메소드와 equals() 메소드를 호출하므로
  HashSet에 객체를 저장할때 hashCode() 와 equals() 메소드를 오버라이딩하여 구현해주어야 한다.
  그러면 원하는 방향대로 같은 객체인지 구별하도록 할 수 있다.
  hashCode()와 equals() 메소드를 구현하여 HashSet을 사용하는 예제는 다음과 같다.

  ```java
  class Student {
      private String name;
      private Integer number;
      
      public Student(String name, Integer number) {
          this.name = name;
          this.number = number;
      }
      
      public String getName() {
          return name;
      }
      
      public void setName(String name) {
          this.name = name;
      }
      
      public Integer getNumber() {
          return number;
      }
      
      public void setNumber(Integer number) {
          this.number = number;
      }
      
      @Override
      public int hashCode() {
          return name.hashCode() + number;
      }
      
      @Override
      public boolean equals(Object obj) {
          if(obj instanceof Student) {
              Student student = (Student) obj;
              return ((student.name).equals(this.name))
                  && (student.number == this.number);
          } else {
              return false;
          }
      }
  }
  
  public class MainClass {
      public static void main(String[] args) {
          Set<Student> hashSet = new HashSet<>();
          hashSet.add(new Student("Lee", 18));
          hashSet.add(new Student("Lee", 18));
          hashSet.add(new Student("Lee", 20));
          
          for(Student s : hashSet) {
              System.out.println("name : " + s.getName());
              System.out.println("number : " + s.getNumber());
          }
      }
  }
  
  // Lee 18
  // Lee 20
  ```

- 이렇게 다른 객체라도 같은 내용을 가지고 있으면 같은 객체로 인식하도록
  적절하게 hashCode() 메소드와 equals() 메소드를 오버라이딩하면 같게 인식할 수 있다.



##### 2-1-1 LinkedHashSet

- LinkedHashSet은 기존의 순서가 존재하지 않는 Set의 특성에서 벗어나,
  중복되는 요소를 취급하지 않지만 순서는 존재하는 Set을 만들 수 있다.



#### 2-2 TreeSet

