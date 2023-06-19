import java.util.Scanner;
public class JavaJaggedArray{

public static void main(String[]args){
  //C/C++ programming fixed array
  //unsized array
  //1dArray  int A[]={10,20,30,40};  //array size 4
  //2dArray  int A[][2]={10,20,30,50,40,30,33};
  //2dArray  int A[3][]={10,20,30,50,40,30,33}; //error
  //int [][]A=new int[3][3];
                       /*      c0      c1      c2
                         r0  A[0][0] A[0][1] A[0][2]
                         r1  A[1][0] A[1][1] A[1][2]
                         r2  A[2][0] A[2][1] A[2][2]

                         */
  int [][]A=new int[3][];
  Scanner sobjr=new Scanner(System.in);
  A[0]=new int[2]; //row1----2 cols
  A[1]=new int[3]; //row2----3 cols
  A[2]=new int[4]; //row4-----4 cols //variable number of cols
                    /*
                               c0    c1    c2   c3
                      r0   A[0][0] A[0][1]

                      r1   A[1][0] A[1][1] A[1][2]

                      r2   A[2][0] A[2][1] A[2][2] A[2][3]  variable number of cols in each row
                                                          its know as jaddedArray*/
  System.out.println("Enter 9 value of Jagged Matrix:\n");
  for(int r=0;r<A.length;r++) //rows(3)
  {               //A[0].length=2 A[1].length=3 A[2].length[4]
	  for(int c=0;c<A[r].length;c++)
	  {
		System.out.println("A["+r+"]["+c+"]=");
		A[r][c]=sobjr.nextInt();
	  }
  }

  System.out.println(" 9 value of Jagged Matrix:\n");
    for(int r=0;r<A.length;r++)
    {
  	  for(int c=0;c<A[r].length;c++)
  	  {
  		System.out.print("A["+r+"]["+c+"]="+A[r][c]+"\t");

  	  }
  	  System.out.println("");
  }
}

}