import java.io.*;
class SapLabs
{
	public static void main(String[]args) throws IOException
	{
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(bfr.readLine());
		String s[]= bfr.readLine().split(" ");
		int k = Integer.parseInt(bfr.readLine());
		int range[][] = new int [k][2];
		for(int i=0;i<k;i++)
		{
			String s1[] = bfr.readLine().split(" ");
			range[i][0] = Integer.parseInt(s[0]);
			range[i][1] = Integer.parseInt(s[1]);
		}
		Solution(n,s,k,range);
	}
	public static void Solution(int n,String s[],int k,int range[][])
	{
		int arr[]=new int [n+1];
		for(int i=0;i<n;i++)
		{
			String word=s[i];
			if(isVowel(word.charAt(0)) || isVowel(word.charAt(word.length()-1)))//checking the first or last character is vowel or not.
			  arr[i+1]=1;
		}
		for(int i=1;i<=n;i++)
		  arr[i]=arr[i-1]+arr[i];//cumulative sum
		for(int i=0;i<k;i++)
		{
			int a=range[i][0];
			int b=range[i][1];
			System.out.println(arr[b]-arr[a-1]);
		}
	}
	public static boolean isVowel(char c)
	{
		if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		  return true;
		return false;
	}
}



