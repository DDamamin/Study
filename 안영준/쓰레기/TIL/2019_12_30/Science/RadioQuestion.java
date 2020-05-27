package Science;

import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.ButtonGroup;
import javax.swing.JLabel;
import javax.swing.JButton;
import javax.swing.AbstractButton;
import javax.swing.BoxLayout;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

import java.awt.event.ActionListener;
import java.util.Arrays;
import java.util.Scanner;
import java.awt.Font;
import java.awt.event.ActionEvent;

public class RadioQuestion extends JPanel implements ActionListener{
	Scanner sc = new Scanner(System.in);
	int correctAns;
	int information;
	Quiz quiz;	
	int selected;
	boolean used;
	//����
	JPanel qPanel=new JPanel();
	//����

	//��
	String[] explanations;
	JPanel aPanel=new JPanel();
//	JRadioButton[] explanations;
	JRadioButton[] responses;
	ButtonGroup group=new ButtonGroup();
	//bottom
	JPanel botPanel=new JPanel();
	JButton next=new JButton("Next");
	JButton finish=new JButton("Finish");
	
	String[] explanation =
			{"�ΰ��� ������� �߰��� ���ҵ� �߿��� ���ֿ��� ���� ǳ���ϸ�,\n ���� ������ ������ ������ ���� ���� ��ȣ�� ���� ���� �����Դϴ�.",
					
			//{"�ΰ��� ������� �߰��� ���ҵ� �߿��� ���ֿ��� ���� ǳ���ϸ�, ���� ������ ������ ������ ���� ���� ��ȣ�� ���� ���� �����Դϴ�.2"},
			"���(He) ���ڹ�ȣ 2��\r\n" + 
					"��Ҹ� ������ ���� ���Ǵ� �����̴�.\r\n" + 
					"��Ȱ�� ��ü�� ù ��° ���ҷ�, ���ֿ��� ���� �������� ���� ���� �����Ѵ�.\r\n" + 
					"",
			"��Ƭ(Li) ���ڹ�ȣ 3��\r\n" + 
					"Ȱ�� ���� ��Ƭ�̿� ������ ���� �����ϴ�.\r\n" + 
					"�Ҳɻ��� �������� ���.\r\n" + 
					"",
			"������(Be) ���ڹ�ȣ 4��\r\n" + 
					"���ڷ��� ������ �� �ݻ���� ���δ�.\r\n" + 
					"���������� �ְ��� ���� ƼŸ������ ������, ưư�ϴ�.\r\n" + 
					"�͵��� �߾Ϲ�����, �̰��� ������ ���� ������ �������� ������ �ɰ��Ѵ�.\r\n" + 
					""};
	
		public RadioQuestion(int index,String q, String[] options/*,String[] explanation*/, int ans, Quiz quiz){
		this.quiz=quiz;
		setLayout(new BoxLayout(this,BoxLayout.Y_AXIS));
		correctAns=ans;
		information = index;
		//question
		JLabel label = new JLabel(q);
		label.setHorizontalAlignment(JLabel.CENTER);
		qPanel.add(label);
		
		add(qPanel);
		responses=new JRadioButton[options.length];
	
		for(int i=0;i<options.length;i++){
			
			responses[i]=new JRadioButton(options[i]);
			Font font = new Font(responses[i].getFont().getName(),responses[i].getFont().getStyle(),25);
			responses[i].addActionListener(this);	
			responses[i].setFont(font);
			group.add(responses[i]);
			aPanel.add(responses[i]);
		
		}
		responses[0].setSelected(true);
		add(aPanel);
		//bottom
		Font nextFont = new Font(next.getFont().getName(),next.getFont().getStyle(),25);
		next.addActionListener(this);
		next.setFont(nextFont);
		Font finishFont = new Font(finish.getFont().getName(), finish.getFont().getStyle(), 25);
		finish.addActionListener(this);
		finish.setFont(finishFont);
		botPanel.add(next);
		botPanel.add(finish);
		add(botPanel);
	
	}
	
	public void actionPerformed(ActionEvent e){
		Object src=e.getSource();
		//next button

		if(src.equals(next)){
			showResult();
			if(selected==correctAns){
				used=true;
				quiz.next();
			}
		}
		//finish button
		finish.setSelected(false);
		if(src.equals(finish)){
			quiz.showSummary();
			//quiz = new Quiz();
		}
		//radio buttons
		for(int i=0;i<responses.length;i++){
				//responses.setSelected(false);
			if(src==responses[i]){
				selected=i;
			}
			
		}
	}
	
	public void showResult(){
		
		
		String text=responses[selected].getText();
		quiz.total++;
		if(selected==correctAns){
			JOptionPane.showMessageDialog(null,text+"\n�����Դϴ�.\n"+ explanation[information] ,"�ؼ�", 	JOptionPane.PLAIN_MESSAGE);
			
		}else{
			
			quiz.wrongs++;
			JOptionPane.showMessageDialog(null,"\n�����Դϴ�.\n �ٽ�Ǯ�����. \n ","�ؼ�", JOptionPane.PLAIN_MESSAGE);
		}
	}
}
