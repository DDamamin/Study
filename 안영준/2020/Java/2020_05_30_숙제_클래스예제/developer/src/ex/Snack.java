package ex;

class Snack
{
	Snack() 
	{
		Snackname = "����"; 	
	}
		public String Snackname;
		public double cost;		
		
		protected void printAttributes()
		{
			if(Snackname != "����") {
			System.out.println("Snackname="+Snackname+"cost="+cost);
		}
			else {
				System.out.println("������ ������� �ٰ����ֽ��ϴ�");
			}
		}
		protected void printAttributes(int a) {
		int the_number_refreshments= (int) (a / 200.2); 
		int the_number_drink = (int) (a / 100); 
		System.out.println("�ٰ� ="+the_number_refreshments + "�� ����ְ�, ����� ="+ the_number_drink +" �� ����ֽ��ϴ�");
		}
	
}


class Drink extends Snack 
{
	Drink() 
	{
		Snackname = "�����"; 
		cost = 100; 
	}
	protected void printAttributes(int a) {
		int the_number_drink = (int) (a / 100); 
		System.out.println("����� ="+the_number_drink + "�� ����ֽ��ϴ�.");
		}
}


class Refreshments extends Snack
{
	 Refreshments()
	{
		Snackname = "�ٰ�";
		cost = 200.2;
	}
		protected void printAttributes(int a) {
			int the_number_refreshments = (int) (a / 200.2); 
			System.out.println("�ٰ� ="+the_number_refreshments + "�� ����ֽ��ϴ�.");
			}
}

