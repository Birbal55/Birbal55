import java.util.Scanner;
public class TesClass1{
	public static void main(String[]args){
		Scanner sobjr=new Scanner(System.in);
		int A[][]=new int[2][2];
		for(int r=0;r<A.length;r++)
		{
			for(int c=0;c<A.length;c++)
			{
				A[r][c]=sobjr.nextInt();
			}
		}
		System.out.println("square matrix is:");
		for(int r=0;r<2;r++)
		{
			for(int c=0;c<2;c++)
			{
				System.out.print("\tA"+"["+r+"]["+c+"]:"+A[r][c]);
			}
			System.out.println();
		}

	}
}

