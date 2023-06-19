import java.util.Scanner;
public class LongestWord{
	public static String LongestWord(String str)
	{
		String str1="";
		String []splitWords=str.split(" ");
		for(String longWord : splitWords)
		{
			String replaceString=longWord.replaceAll("[^A-Za-z0-9]+","");
			if(str1.length() < replaceString.length())
			{
				str1=replaceString;
			}
		}
		return str1;
	}
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		String str=sobjr.nextLine();
		System.out.println(LongestWord(str));
	}
}

