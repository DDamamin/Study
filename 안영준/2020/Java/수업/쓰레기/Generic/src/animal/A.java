package animal;

public class A<T extends Animal>{
	

	public static void main(String[] args) {
		A<Dog12> a = new A<>();
		A<Animal> a2 = new A<>();
		System.out.println(a);
		System.out.println(a2);

		// animal ������ ����Ŭ����
		// ����Ÿ���� Ŭ�����Ӹ��� �ƴ϶� �������̽��� �����ϴ�. , �������̽���� �ؼ� implements x <T extend ����Ÿ��>  ���� Ÿ�Ը޼ҵ�(
	} //����,����Ŭ����������
}

//���׸� Ÿ���� �Ű����̳� ����Ÿ������ ����� �� = ���ϵ�ī������.