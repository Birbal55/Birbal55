import java.util.*;
import java.util.Scanner;
public class Main {
    public static void main(String [] args){
    int r=0;
    Scanner sobjr=new Scanner(System.in);
   System.out.println("Enter number:");
   int n=sobjr.nextInt();
   //for(int r=0;r<3;r++)
  // while(r>=3)
   {

    if (n%10==0)
      System.out.println(n/10);
    else
      System.out.println((n/10)+1);
   }

    }
}