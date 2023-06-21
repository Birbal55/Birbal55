import java.util.Scanner;
public class Vowel{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		System.out.println("Enter an alphabet:");
		char ch=sobjr.nextLine().charAt(0);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		  System.out.println("Its a vowel");
    	else
	      System.out.println("Its a consonant");
	  }
  }