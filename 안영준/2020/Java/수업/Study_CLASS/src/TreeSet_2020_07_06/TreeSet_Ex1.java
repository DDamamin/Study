package TreeSet_2020_07_06;

import java.util.*;

public class TreeSet_Ex1 {
	public static void main(String[] args) {
		TreeSet<Integer> treeset = new TreeSet<Integer>();
		treeset.add(new Integer(1));
		treeset.add(new Integer(12));
		treeset.add(new Integer(13));
		treeset.add(new Integer(14));
		treeset.add(new Integer(15));

		Integer score = null;

		score = treeset.first();
		System.out.println("���� ���� ����"+score);
		
		score = treeset.last();
		System.out.println("���� ���� ����"+score+"\n");
		
		score = treeset.lower(new Integer(95));
		System.out.println("95�� �Ʒ����� " + score);
		
		score = treeset.higher(new Integer(95));
		System.out.println("95 ���� ����"+score);

		score = treeset.floor(new Integer(95));
		System.out.println("95�̰ų� �ٷ� �Ʒ� �Լ�"+score);
		
		score = treeset.ceiling(new Integer(94));
		System.out.println("95�̰ų� �ٷ� ���� �Լ�"+score);
		
		while(treeset.isEmpty()) {
			score = treeset.pollFirst();
			System.out.println(score+"���� ��ü ��" + treeset.size());
		}
	
	}
}
