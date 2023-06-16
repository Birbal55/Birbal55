import java.util.Scanner;
public class A3
{
	public static int getBin(int num)
	{
		int decimal=0;
		int n=0;
		while(true)
		{
			if(num==0)
			  break;
			  else
			  {
				  int temp=num%10;
				  decimal+=temp*Math.pow(2,n);
				  num/=10;
				  n++;
			  }
		  }
		  return decimal;

		}
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		System.out.println(getBin(num)/8);
	}
}