package TreeMap_2020_07_06;
import java.util.*;
public class TreeMap_Change_SET {	

		public static void main(String[] args) {
			TreeMap<Integer,String> treeset = new TreeMap<Integer,String>();
			treeset.put(new Integer(1),"abcd");
			treeset.put(new Integer(41),"abcd");
			treeset.put(new Integer(3),"abcd");
			treeset.put(new Integer(2),"abcd");
		Map.Entry<Integer, String> score =null;			
			
			score = treeset.firstEntry();
			System.out.println("���� ���� ����"+treeset.firstEntry());
			
			score = treeset.lastEntry();
			System.out.println("���� ���� ����"+score+"\n");
			
			score = treeset.lowerEntry(new Integer(95));
			System.out.println("95�� �Ʒ����� " + score);
			
			score = treeset.higherEntry(new Integer(95));
			System.out.println("95 ���� ����"+score);

			score = treeset.floorEntry(new Integer(95));
			System.out.println("95�̰ų� �ٷ� �Ʒ� �Լ�"+score);
			
			score = treeset.ceilingEntry(new Integer(94));
			System.out.println("95�̰ų� �ٷ� ���� �Լ�"+score);
			
			
			while(treeset.isEmpty()) {
				score = treeset.pollFirstEntry();
				System.out.println(score+"���� ��ü ��" + treeset.size());
			}
		
		
	}

}
