import java.util.Scanner;
public class Sum{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter two values:");
		double dno1=sobjr.nextDouble();
		double dno2=sobjr.nextDouble();
		System.out.println("sum="+(dno1+dno2));
	}
}