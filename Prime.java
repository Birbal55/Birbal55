import java.util.Scanner;
class Prime{
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number:-");
		int x = sc.nextInt();
		int r=1;
		int count=0;
		while(r<=x)
		{
			if(x%r==0)
			  count++;
			r++;
		}
		if(count==2)
  		System.out.println(x);
	}
}
