package JAVA_23;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class TCPServer1 {
	public static void main(String[] args) {
		ServerSocket a;
		
	try {
		a = new ServerSocket(9999);
		System.out.println("Multi-Server Start!");
		
		Socket b = a.accept();
	 System.out.println("Client Connected....");
	 
	 while(true) {
		 InputStream is = b.getInputStream();
		 DataInputStream ds = new DataInputStream(is);
		 
		 String rcvBuff = ds.readUTF();
		 System.out.println("�ϱ� ����:"+rcvBuff);
		 
		 OutputStream os = b.getOutputStream();
		 DataOutputStream dos = new DataOutputStream(os);
		 
		 dos.writeUTF(rcvBuff);
	 }
	} catch(IOException e) {
		e.printStackTrace();
	}
	}
	
}
 
//    collection(i)
/* List(i)		set(i)			Map(i)
 ArrayList		HashSet			HashMap
 Vector			TreeSet			Hashtable
 LinkedList						TreeMap
 								Properties
 			 					
 List = Data�� �ߺ��ؼ� ���� �� �� �ִ�, �������ִ�, ��ü�� ������ �����Ѵ�.(��ü ��ü�� �����ϴ� ���̾ƴ�<- �̰Ͷ����� �ߺ��̵�), null�� ���尡��
 Set = List �ݴ�
 Map = k,v �� ����, ���� k �������� �ߺ��̾ȵȴ�.
 
 //list�÷��� add = �߰� , get = �˻�, remove = ����
 
 for( String s(��������) : list(�ش� �÷���)){}
 
 ArrayList = list�������̽��� ���� Ŭ������ �迭�� ����
 ArrayList�� ����뷮�� �ʰ��� ��ü���� ������ �ڵ����� �þ
(�ʱ�뷮 = 10��) 
Ư���ε����� �����Ǹ� ������ �ε������� ��� 1�� �з���.

������ = linkedlist
�˻���  =arraylist

������ ��ü��� ������ List ������ ��
Array.asList(T... a)
 */


