import java.util.Scanner;
public class SwapVal{
 public static void main(String[]args){
   Scanner sobjr=new Scanner(System.in);
   System.out.println("Enter first and second value:");
   int x=sobjr .nextInt();
   int y=sobjr.nextInt();
   System.out.println("Before swap x="+x+"y="+y);
   x=x+y;
   y=x-y;
   x=x-y;
   	/*t=x;
   	x=y;
   	y=t;
   	*/
   	/*
   	x=x*y;
   	y=x/y;
   	x=x/y;
   	*/
   	/*
   	x=x^y;
   	y=x^y;
   	x=^y;
	*/
	System.out.println("After  swap x="+x+"y="+y);
	}
	}