import java.util.StringTokenizer;
import java.util.Scanner;
/**
 *
 * @author mailr
 */
public class TestClass {
    public static void main(String[] args) {
     //char,CharArray vs String *** in java
	   Scanner sobjr=new Scanner(System.in);


	   System.out.println("Enter any char value:");
	   char cv=sobjr.nextLine().charAt(0);


	   char []carr=new char[20];//index allowed //length property
	   System.out.println("Enter Array of character:");
	   for(int r=0;r<5;r++)
	   {
	       carr[r]=sobjr.nextLine().charAt(0);
	   }

	   System.out.println("Enter any String:");
	   String str=sobjr.nextLine();

	   System.out.println("Char is:"+cv);
	        System.out.print("char array is:");
	        System.out.println(carr);
	        System.out.println("String is:"+str);


    }
}