import java.util.Scanner;
public class Ascii{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter any character:");
		char cv=sobjr.nextLine().charAt(0);
		System.out.println("character is=" +cv+ "\n Ascii value is="+ (int)(cv));
	}
}


