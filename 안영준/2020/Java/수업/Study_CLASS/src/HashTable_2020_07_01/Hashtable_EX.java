package HashTable_2020_07_01;

import java.util.*;

public class Hashtable_EX {
public static void main(String[] args) {
	Map<String,String> map = new Hashtable<String,String>();
	
	map.put("abc", "12");
	map.put("abdc", "12");
	map.put("abddc", "12");
	map.put("adbddc", "12");
	map.put("adddbc", "12");
	
	Scanner scanner = new Scanner(System.in);
	
	while(true) {
		System.out.println("���̵�: ");
		String id = scanner.nextLine();
		System.out.println("��й�ȣ: ");
		String password = scanner.nextLine();
		
		System.out.println();
		
		if(map.containsKey(id)) {
			if(map.get(id).equals(password)) {
				System.out.println("������");
				break;
			}
			else {
				System.out.println("����");
			}
		}
	}
}
	
}
