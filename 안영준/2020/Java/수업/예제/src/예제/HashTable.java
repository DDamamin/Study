package ����;

import java.util.Hashtable;

public class HashTable {

	public static void main(String[] args) {
		Hashtable<Integer, String> ht = new Hashtable<Integer, String>();
		ht.put(0, "a");
		ht.put(1, "b");
		ht.put(2, "c"); // Hashtable�� �� ����
		ht.replace(2, "d"); // Hashtable �� �ٲٱ�
		ht.remove(2); // Hashtable �� ����

		for(int i = 0; i<ht.size(); i++) {
			System.out.println(ht.get(i)); // Hashtable �� ���
		}
		
		System.out.println("Hashtable ũ�� : " + ht.size());
		System.out.println("Hashtable key Ȯ�� : " + ht.containsKey(1));
		System.out.println("Hashtable value Ȯ�� : " + ht.containsValue("a"));
		System.out.println("Hashtable ũ�� 0���� Ȯ�� : " + ht.isEmpty());
		System.out.println("Hashtable ��ü Key Ȯ�� : " + ht.keySet());
		
	}

}