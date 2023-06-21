import java.util.StringTokenizer;
import java.util.Scanner;
public class StringExample1 {

      public static void main(String[] args) {
	            Scanner sobj=new Scanner(System.in);
			           System.out.println("enter the String");
			           String s=sobj.nextLine();
			           System.out.println("the String="+s);
			           System.out.println("length="+s.length());
			           //System.out.println("length="+s.substring(3,l));

			           int i=s.length()-1;  //str="hello"
			                                //     01234  ==s.length()=5
			           System.out.print("Reverse of string is:");
			           while(i>=0)
			           {
			           System.out.print(""+s.charAt(i));
			           i--;
			           }
			           //its not correct program of reverse string
			           System.out.println("Now your string is:"+s);
			                                //str="hello"
			                                //i want str="olleh"===answer

                             //what are various ways to reverse string java
    }
}
