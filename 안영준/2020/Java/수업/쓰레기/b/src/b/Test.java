package b;

interface Fi{
	int run(int a,int b);
}
public class Test {
	public static void main(String[] args) {
		Fi fi = new Fi() {
			public int run(int a, int b) {
				return a+b;
			}
		};
		
		System.out.println(fi.run(10, 20));
		
		Fi F2 = (x,y)-> x+y;
		System.out.println(F2.run(10, 20));
// (Ÿ�� �Ű�����)�� ������ �߰�ȣ ����� �����ϱ� ���� �������� �� ����) �������̽�<- Ÿ��Ÿ�� ���� = ���ٽ�.
//�Լ��� �������̽������ (�ϳ����־�ߵ�)
// �޼ҵ� ���� = �޼ҵ带 �����ؼ� �Ű������� ���� �� ����Ÿ���� �˾Ƴ��� ���ٽĿ��� ���ʿ��� �Ű������� �����ϴ°��� �����̴�, �ܼ��� ȣ�⸸ �ϴ°��
// Math ::max; <- �޼ҵ� ���� (Ŭ�����̸� :: �޼ҵ�)
// ���� �޼ҵ� = Ŭ����::�޼ҵ� , �ν��Ͻ� �ļҵ� = ��������::�޼ҵ�
	}

}

