class Tester3 {
	public static void main(String[] args) {
		// Implement your code here
		int num=1331,dig=0,rev=0;
		int temp=num;
		while(temp!=0)
		{
		  dig=temp%10;
		  rev=rev*10+dig;
		  temp=temp/10;
		}
		if(rev==temp)
	    	System.out.println(num + "is a palindrome");
		else
		   System.out.println(num + "is not a palindrome");
	}
}

