import java.util.Scanner;
public class Sin1{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter value for sin:");
		double dval=sobjr.nextDouble();
		System.out.println("sin value of "+dval+" is "+Math.sin(dval));
		System.out.println("sin value of "+dval+" is "+Math.sin(dval*3.141592));

}
}