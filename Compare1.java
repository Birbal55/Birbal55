import java.util.Scanner;
public class Compare1{
	public static void main(String[]args){
		Scanner sobjr=new Scanner (System.in);
		System.out.println("Enter two values:");
		double dno1=sobjr.nextDouble();
		double dno2=sobjr.nextDouble();
		//compare
		if(dno1==dno2)
		  System.out.println("Both are equal");
		else if(dno1>dno2)
		  System.out.println("First is big");
		else
		  System.out.println("Second is big");
	  }
  }