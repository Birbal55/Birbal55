/*Implement a program to find out whether a number is a seed of another number.

A number X is said to be a seed of number Y if multiplying X by its every digit equates to Y.

E.g.: 123 is a seed of 738 as 123*1*2*3 = 738 */
public class Teser5{
	public static void main(String[]args){
		int x=123,y=738;
		int temp=1;
		int dig;
		temp=x;
		while(temp>0)
		{
			dig=temp%10;
			temp*=dig;//123%10=3  1*3=3 | 12%10=2  3*2=6| 1%10=1 6*1=6
			temp/=10;//123/10=12 | 12/10=1  | 1/10=1
	    }
	    if(temp==y)
	      System.out.println(x+" is a seed of"+y);
	    else
	      System.out.println(x+" is not a seed of "+y);

   }
}