package ������1;

import ������1.Drink;
import ������1.Refreshments;
import ������1.Snack;

public class Main
{
	public static void main( String [] args )
	{
		Snack snack = new Snack();
		Drink drink = new Drink();
		Refreshments refreshments = new Refreshments();
		
	
		
		snack.print();
		drink.print();
		refreshments.print();
		snack.print(300);
		drink.print(300);
		refreshments.print(300);
		
	}
}