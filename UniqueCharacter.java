import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
public class UniqueCharacter{
	public  static int uniqueChar(String str)
	//public   int uniqueChar(String str)
	{
		if(str==null || str.length()==0)
		  return 0;

	Set<Character> sc = new HashSet<>();
	for(int r=0; r<str.length(); r++)
	{
		sc.add(str.charAt(r));
	}
	return sc.size();
   }
	public static void main(String[]args){
		Scanner sobjr=new Scanner (System.in);
		System.out.println("Enter your String:");
		String str=sobjr.nextLine();
		//UniqueCharacter obj=new UniqueCharacter(); //if you declare non-static method then you have to create obj for call
		//System.out.println(obj.uniqueChar(str));
		System.out.println(uniqueChar(str));

	  }
  }