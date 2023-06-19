import java.util.Scanner;
public class ClassA1
{
	static int printPattern( int num)
	{
		if(num%2==0)
		{
			for(int r = 0; r < num; r+=2)
			//System.out.println(r);
			return r;
		}
		else
		{
			for(int r = 1; r < num; r+=2)
			//System.out.println(r);
			return r;
		}
}

	public static void main(String[]args){
		Scanner sobjr = new Scanner (System.in);
		int num = sobjr.nextInt();
		int arr[] = {1,2,3,4,5,6,7,8,9,10};
		System.out.println(printPattern(num));

}
}