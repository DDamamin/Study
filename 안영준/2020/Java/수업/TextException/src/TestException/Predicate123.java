package TestException;

import java.io.IOException;
import java.util.function.Predicate;
 
public class Predicate123 
{
 
  

    public static void main(String[] args) throws IOException
    {
    	
        //���� 1 = �Ű԰� �����ؼ� ���� ��ȯ ���� 
        Predicate<String> match = n->
        {
            if("1".equals(n))
            {
                System.out.println("1�Դϴ�");
                return true;
            }
            else 
            {
                System.out.println("1�� �ƴմϴ�");
                return false;
            }
        };
        System.out.println(match.test("1"));

    	//���� 2 = �Ű԰� �����ؼ� ���� ��ȯ ���� 
        Predicate<Integer> p0 = n -> n>0;
        System.out.println(p0.test(0)?"���":"����� �ƴϴ�.");
        
        
    	//���� 3 = �ڹ��� �������ڿ� ����� ������ �ϴ� and,or,negate,equals

        int num = 0;        
        Predicate<Integer> p1 = n -> n != 0;
    	Predicate<Integer> p2 = n -> n != 1;
        if (p1.test(num)) {

        	System.out.println("0�� �ƴմϴ�..");

        } else if (p2.test(num)) {

        	System.out.println("1�� �ƴմϴ�.");

        }

        Predicate<Integer> p3 = p1.and(p2);

        if (p3.test(num)) {

        	System.out.println("1,0�� �Ѵپƴմϴ�.");

        }
        Predicate<Integer> p4 = p1.or(p2);

        if (p4.test(num)) {

        	System.out.println("0,1�� �� �ϳ��� �ƴմϴ�.");

        }
        
        System.out.println("===================");
      
        Predicate<Integer> p5 = Predicate.isEqual(p1);

        if (p5.test(num)) {

        	System.out.println("0,1�� �� �ϳ��� �ƴմϴ�.");

        }
    
        Predicate<String> p6 = Predicate.isEqual(null);
        System.out.println("�����ϴ�. " + p6.test(null));

    }   
   
    
    
}//CLASS END


