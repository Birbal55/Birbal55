import java.util.Scanner;
public class CharacterCount{
	public  String charCount(String str)
	{
		String str1 = "";

		int count=0;
		char ch = str.charAt(0);
		for(int r=0; r < str.length(); r++)
		{
			if(str.charAt(r) == ch)
			{
				count++;
			}
			else
			{
				str1 += count+""+ch;
				ch = str.charAt(r);
				count = 1;
			}

		}

		str1 += count+""+ch;
		return str1;
	}
	public static void main(String[]args)
	{
		Scanner sobjr=new Scanner(System.in);
		//String str=sobjr.nextLine();

	    CharacterCount obj = new CharacterCount();

	  // System.out.println(charCount(str));
	   System.out.println(obj.charCount(sobjr.nextLine()));
   }
}
