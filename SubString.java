import java.util.Scanner;
public class SubString{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		String str="";
		String sigma=sobjr.nextLine();
		int alpha=sobjr.nextInt();
		int theta=sobjr.nextInt();
		if((alpha>0&& theta<sigma.length()) & (alpha<theta))
		  str=sigma.substring(alpha,theta);
		System.out.println(str);
	}
}