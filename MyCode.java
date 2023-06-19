import java.util.Scanner;
class MyCode{
	public static void main(String[]args){
		Scanner sobjr=new Scanner (System.in);
		System.out.println("Enter withdrawl money and total money:");
		float fno1=sobjr.nextFloat();
		float fno2=sobjr.nextFloat();
		if(fno1%5==0 && fno1<=fno2)
		  System.out.println(fno2-fno1-0.50);
		else
		  System.out.println(fno2);

}
}