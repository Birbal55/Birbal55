class Tester4 {
	public static void main(String[] args) {
		// Implement your code here
	   	int num=2250;
		int sum=0,dig=0;
		int temp=num;

		while(temp!=0)
		{
		    dig=temp%10;
		    sum+=dig;
		    temp=temp/10;
		}
		if(temp % sum==0)
		  System.out.println(num+" is divisible by sum of its digits");

		else

		  System.out.println(num+" is not divisible by sum of its digits");
	}
}
