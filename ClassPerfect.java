import java.util.Scanner;
import java.lang.Math;
public class ClassPerfect
{
	static boolean checkPerfect(int num)
	{
		if(num<=1000 && num >=9999)
		{
			int tem;
			int num1=num;
			checkEven(num1);
			double temp = Math.sqrt(num);
			if((temp * temp) == num)
			{
				 tem = (int) temp;
}
		    return ((tem * tem) == num);
		}
		return false;
	}
	static int checkEven(int num1)
	{

		while(num1 != 0)
		{
			int digit = num1 % 10;
			 if(digit % 2 == 0){}
			 else{
				 System.out.println("odd digit");
			 }
			num1/=10;
		}
		return 0;
	}

		public static void main(String [] args){
			Scanner sobjr = new Scanner(System.in);
			System.out.println("Enter a number:");
			int num = sobjr.nextInt();
			System.out.println(checkPerfect(num));
		}
	}

