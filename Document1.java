class Tester {
	public static void main(String[] args) {
		// Implement your code here
		int a=2,b=6,c=7;
		if(a!=7 && b!=7 && c!=7)
		   System.out.println("product="+(a*b*c));
		else if(a==7)
		   System.out.println("product="+b*c);
		else if(b==7)
		   System.out.println("product="+c);
		else
		   System.out.println("-1");
	}
}

