package TextThorws;

public class TextException {
	public static void main(String[] args) {

		try  {

			method1();		

		} catch (Exception e)	{

			System.out.println("main�޼��忡�� ���ܰ� ó���Ǿ����ϴ�.");

			e.printStackTrace();

		}

	} // main�޼����� ��



	static void method1() throws Exception {

		throw new Exception();

	} // method1()�� ��

} // class�� ��

/*��������� ���� = �Ϲݿ��ܷ� ����, ���� ���ܷ� ���� �Ѵ� �����ϴ�.
 *  
 */


	/*public static void main(String[] args) {
		try {
			method(); //static �ȿ��� static���� ����Ǿ����
			System.out.println("Ŭ���� ã��");
		}catch(ClassNotFoundException e) {
			System.out.println("Ŭ���� ��ã��");
		}
	 
		
	}
	static void method() throws ClassNotFoundException {
		try {
			Class c = Class.forName("java.lang.String");
			
			//	System.out.println("Ŭ���� ã��");
			
	//	} catch(ClassNotFoundException e) {
			
		//}
		
		}	
		catch (Exception e) {

			System.out.println("method1�޼��忡�� ���ܰ� ó���Ǿ����ϴ�.");

			e.printStackTrace();



	}
}
}
*/