import java.util.Scanner;
public class CheckAlpha{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter any alphabet:");
		char cv=sobjr.nextLine().charAt(0);
		if(cv>=97&& cv<=122)
		  System.out.println("Its a lower case alphabet");
		else if(cv>=65 && cv<=90)
		  System.out.println("Its a upper case alphabet");
		else
		  System.out.println("Its not an alphabet");
	  }
  }