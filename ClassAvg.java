import java.util.Scanner;
public class ClassAvg{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter number :");
		double sum=0.0;
		for(int r=1;r<=10;r++)
		{

			double n=sobjr.nextDouble();
			sum+=n;
	    }
		System.out.println("Avg="+(sum/10.0));

	}
}