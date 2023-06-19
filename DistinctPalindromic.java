import java.util.Scanner;
import java.util.HashMap;



public class DistinctPalindromic

		{
			public static int disPali(String str)
			{
				//to store the position of palindromic sub string
				int [][]d=new int[str.length()][str.length()];
				int st,end,i,len;
				//Map to store sub string
				HashMap<String,Boolean> m =new HashMap<>();
				for( i=0;i<str.length();i++)
				{
					//sub string of length 1 are palindromes
					d[i][i]=1;
					//store continuous palindromic sub strings
					m.put(str.substring(i,i+1),true);
				}
				//store palindromes of size 2
				for(i=0;i<str.length();i++)
				{
					if(str.charAt(i)==str.charAt(i+1))
					{
						d[i][i+1]=1;
						m.put(str.substring(i,i+2),true);
					}
					//if str[i...(i+1)] is not a palindromic then set d[i][i+1]=0
					else
					  d[i][i+1]=0;
			   }
			   //find palindromic substrings of length>=3
			   for(len = 3;len<=str.length();len++)
			   {
				   for(st=0;st<=str.length()-len;st++)
				   {
					   //end of palindromic substring
					   end=st+len-1;
					   //if s[start]==str[end] and
					   //dp[start+1][end-1] is already palindrome
					   //then str[start...end] is also a palindrome
					   if(str.charAt(st)==str.charAt(end) && d[st+1][end-1]==1)
					   {
						   //set dp[start][end]=1
						   d[st+1][end]=1;
						   m.put(str.substring(st,end+1),true);
					   }
					   //not a palindrome
					   else
						 d[st][end]=0;
					 }
				 }
				 return m.size();
		   }

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your String:");
		String str = sc.nextLine();
		System.out.println(disPali(str));
	}
}
