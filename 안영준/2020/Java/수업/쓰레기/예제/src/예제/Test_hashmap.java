package ����;

import java.util.HashMap;

public class Test_hashmap {
    public static void main(String[] args) {
        HashMap<String, String> map = new HashMap<String, String>();
        //����Ÿ�� ���� = <��ü�� Ÿ��> �޼ҵ��(�Ű���)
        HashMap<String, String> map2 = new HashMap<String, String>();
        map.put("English", "����");
        map.put("World", "����");
        map2.put("hello", "�ȳ�");
   

        System.out.println("English�� Ű�� : " + map.get("English"));        
        //value���� ����������, key ��
        
        System.out.println("English �ֳ� ���� Ȯ�� =" + map.containsKey("English"));
        //��(Map)�� �ش� Ű(key)�� �ִ����� �����Ͽ� �� ������� �����Ѵ�.
        
        System.out.println("value �� ��ȯ : " + map.values());
        System.out.println("�����Ǳ��� ������: " + map.size());
        

        System.out.println("�����ǰ� ���� value ��: " + map.remove("English"));
        //���� �׺����� , key,value �����ϰ� value�� ����
        
        System.out.println("������ �� ������: " + map.size());
        //value ũ�⺸����=
        System.out.println("value �� ��ȯ : " + map.values());
        //value ������
        
        map.putAll(map2); 
        System.out.println(map);
        }
}
