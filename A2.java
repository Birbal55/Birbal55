import java.util.Scanner;
public class A2
{
	public static void main(String[]args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of array:");
		int n = sc.nextInt();
		int arr[]=new int[n];
		int max=arr[0];
		//int idx=0;
		int min=arr[0];
		System.out.println("Enter values for array:");
		for( int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
			if(max<arr[i])
			{
				max=arr[i];
				//idx=i;
			}
			else
			  min=arr[i];
		}
		//System.out.println(idx);
		System.out.println("max="+max);
		System.out.println("min="+min);
	}
}

