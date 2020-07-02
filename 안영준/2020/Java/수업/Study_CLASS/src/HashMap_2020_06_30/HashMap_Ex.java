 package HashMap_2020_06_30;
import java.util.*;
//Ű�� ����� ��ü�� hashcode�� equals �޼ҵ带 �������ؼ� ���� ��ü�� �� ������ ���ؾ� �Ѵ�.
public class HashMap_Ex {
	void sum(String ...str) {
		for(String a:str) System.out.println(a);
	}
	void sum1(String[] str1) {
		for(String b : str1) System.out.println(b);
	}
	public static void main(String[] args) {
		Map<String,Integer> map = new HashMap<String,Integer>();
		HashMap_Ex v = new 	HashMap_Ex();
        v.sum("-","a","b","c");

		map.put("a", 1);
		map.put("a2", 1);
		map.put("a3", 1);
		map.put("a4", 1);
		map.put("a5", 1);
		System.out.println("entry: "+map.size());
		
		System.out.println("ȫ�浿:"+map.get("a"));
		System.out.println();
		
		Set<String> keyset = map.keySet();
		Iterator<String> keyIterator = keyset.iterator();
		while(keyIterator.hasNext()) {
			String key = keyIterator.next();
			Integer value = map.get(key);
			System.out.println(key+value);
				
		}
		
		System.out.println();
	map.remove("a");
	System.out.println("entry:"+map.size());
	
	Set<Map.Entry<String, Integer>> entryset = map.entrySet();
	Iterator<Map.Entry<String,Integer>> entryInterator =  entryset.iterator();
	
	while(entryInterator.hasNext()) {
		Map.Entry<String, Integer> entry = entryInterator.next();
		String key = entry.getKey();
		Integer value = entry.getValue();
		System.out.println(key+value);
	}
	System.out.println();
	map.clear();
	System.out.println(map.size());
	}


}
