import java.util.Scanner;
public class Power{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter base and power");
		double dno1=sobjr.nextDouble();
		double dno2=sobjr.nextDouble();
		System.out.println(dno1+ "power" +dno2+"="+(Math.pow(dno1,dno2)));

	}
}