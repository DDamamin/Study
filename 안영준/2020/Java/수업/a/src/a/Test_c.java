package a;


public class Test_c {
	public static void main(String[] args)
	{
    	// �������̽� ���� = new �������̽�()
		Fi rc = new Fi()
		{
        	// �������̽��� �߻� �޼ҵ��� ��ü ����
			public void EatSomething() 
			{
				System.out.println("�ƾƾ�");
			}	
		};
		
		rc.EatSomething();
	}
}}
