import java.util.Scanner;
public class AgeCompare{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter your age:");
		int iage=sobjr.nextInt();
		//compare
		if(iage>=18)  //outer if
		{
			if(iage<=123) //inner if
			  System.out.println("You are allowed to vote");
			else
			  System.out.println("You are not allowed to vote due to Overage");
	    }
	    else
	      System.out.println("You are not allowed to vote due to underage");
	  }
  }
