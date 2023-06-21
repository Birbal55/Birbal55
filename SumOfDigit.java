import java.util.*;
public class SumOfDigit
{
	public static int findMaxDigit(int num)
	{
		int max=0;
		while(num!=0)
		{
			if(num%10>=max)
			{
				max=num%10;
			}
			num/=10;
	   }
	   return max;
   }
   public static void main(String[]args)
   {
	   Scanner sc = new Scanner(System.in);
	   System.out.println("Enter the number:");
	   String s =sc.next();
	   int price=0;
	   for(int i=0;i<s.length();i++)
	   {
		   if(s[i] >='0' && s[i] <='9')
		   {
			   price += (s[i]-48);
		   }
		   else
		   {
			   price += findMaxDigit(s(i));
		   }
	   }
	   System.out.println(price);
   }
}

