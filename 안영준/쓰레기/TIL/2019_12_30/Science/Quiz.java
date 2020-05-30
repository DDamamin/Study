package Science;

import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.CardLayout;
import java.util.Random;
import javax.swing.JOptionPane;

public class Quiz extends JFrame{
	JPanel p=new JPanel();
	CardLayout cards=new CardLayout();
	int numQs;
	int wrongs=0;
	int total=0;
	
/*	String[][] explanation = {
			{"�ΰ��� ������� �߰��� ���ҵ� �߿��� ���ֿ��� ���� ǳ���ϸ�, ���� ������ ������ ������ ���� ���� ��ȣ�� ���� ���� �����Դϴ�."},
			
	};*/
	String[][] answers={
		{"","����","���","��Ʈ��","���"},
		{"","���","�׿�","�Ƹ���","ũ����"},
		{"","��Ʈ��","Į��","��Ƭ","��"},
		{"","���׳׽�","Į��","��Ʈ��Ƭ","������"},

		};
	RadioQuestion questions[]={
		
		new RadioQuestion(
			0,"<html><body><center><br><br><big>�ΰ��� ������� �߰��� ���ҵ� �߿��� ���ֿ��� ���� ǳ���ϸ�,<br> ���� ������ ������ ������ ���� ���� ��ȣ�� ���� ���� ���Ҵ�?</big></center></body></html>",
			answers[0],
			1,this
		),
		new RadioQuestion(
			1,"<html><body><center><br><br><big>�׸��� Ƽź�� �¾�� �︮�������� �̸��� ���Դ�.<br>"+
			"�� ������ 1968�� ������ õ������ �ǿ��� �弾�� �¾� �ϽĿ��� �� ���縦 �߰��߱� �����̴�."+"<br>�� ���ҿ� �ش��ϴ°���?</center></body></html>",
			answers[1],
			1,this
		),
		new RadioQuestion(
			2,"<html><body><center><br><br><big>\r\n" + 
			"���� �е��� ���� �ݼ� ���ҷ�, ������ ������ ���� �� �ִ´�.<br> �� ���Ҵ�?</big></center></body></html>",
			answers[2],
			3,this
			),
		new RadioQuestion(
			3,"<html><body><center><br><br><big>�ܸ��� ���ٰ� �˷��� ����������, <br> ���� �߾ϼ��� ���� �͵��� �����̴�. <br>�� ���Ҵ�?</big></center></body></html>",
			answers[3],
			4,this
			),
		
		
		
	};

	public static void main(String args[]){
		new Quiz();
	}
	
	public Quiz(){
		super("Corevia");
		setResizable(false);
		setSize(1200,800);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		
		p.setLayout(cards);
		numQs=questions.length;
		for(int i=0;i<numQs;i++){
			 p.add(questions[i],"q"+i);
		}
		Random r=new Random();
		int i=r.nextInt(numQs);
		cards.show(p,"q"+i);
		add(p);
		setVisible(true);
	}
	
	public void next(){
		if((total-wrongs)==numQs){
			showSummary();
		}else{
			Random r=new Random();
			boolean found=false;
			int i=0;
			while(!found){
				i=r.nextInt(numQs);
				if(!questions[i].used){
					found=true;
				}
			}
			cards.show(p,"q"+i);
		}
	}
	
	public void showSummary(){
		JOptionPane.showMessageDialog(null,"�������ϴ�. ����� ����"+
			"\n����� ���� �� "+wrongs+ "�� Ʋ�Ƚ��ϴ�." +
			"\n����� ���� �� "+(total-wrongs)+ "�� �¾ҽ��ϴ�." +
			"\n����� ����� : \t\t"+(int)(((float)(total-wrongs)/total)*100)+"%","�������", JOptionPane.PLAIN_MESSAGE
		);
		System.exit(0);
	}
}