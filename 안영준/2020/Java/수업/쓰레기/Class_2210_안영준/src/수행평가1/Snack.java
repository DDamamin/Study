package ������1;


import ������1.Snack;

class Snack
{
	Snack() 
	{
		Snackname = "����"; 	
	}
		public String Snackname;
		public int cost;		
		
		protected void print()
		{
			if(Snackname != "����") {
			System.out.println("Snackname="+Snackname+"cost="+cost);
		}
			else {
				System.out.println("������ ������� �ٰ����ֽ��ϴ�");
			}
		}
		protected void print(int a) {
		int the_number_refreshments= (int) (a / 200); 
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
	@Override
	protected void print(int a) {
		int the_number_drink = (int) (a / 100); 
		System.out.println("����� ="+the_number_drink + "�� ����ֽ��ϴ�.");
		}
}


class Refreshments extends Snack
{
	 Refreshments()
	{
		Snackname = "�ٰ�";
		cost = 200;
	}
	 	@Override
		protected void print(int a) {
			int the_number_refreshments = (int) (a / 200); 
			System.out.println("�ٰ� ="+the_number_refreshments + "�� ����ֽ��ϴ�.");
			}
}


