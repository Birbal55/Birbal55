import java.util.Scanner;
public class CheckAlpha1{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter any alphabet:");
		char cv=sobjr.nextLine().charAt(0);
		if((cv>='a' && cv<='z')||(cv>='A' && cv<='Z'))
		  System.out.println("Its an  alphabet");
		else if(cv>=0 && cv<=57)
		  System.out.println("Its a digit");
		else
		  System.out.println("Its a special character");
	  }
  }