import java.util.Scanner;
public class Sqrt{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter base:");
		double dbase=sobjr.nextDouble();
		System.out.println("Square root of "+dbase+" is "+Math.sqrt(dbase));
}
}

