package Generic_test_2;

public class Test{
	static <T> T a(T t) {
		return t;
	}
public static void main(String[] args) {
	String str = a("h1");
	System.out.println(str);
			
}

}

	 
// ���ѵ� Ÿ�� �Ķ���Ͷ� ����, Ÿ�� �Ķ���� �ڿ� extends Ű���带 ���̰� ���� Ÿ���� ���.