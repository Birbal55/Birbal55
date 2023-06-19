#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[2][2],r,c;
	/*
	Matrix(math)====programming(2d array implementation)
	            c0                  c1
	    r0   A[0][0]\tA[0][1]  //over ]n
	            10      20
	    r1  A[1][0]\tA[1][1]   \n
	          11         22
	//A[0][0]   A[0][1]     A[1][0]    A[1][1]
	-------------------------------------------
	    10    |   20     |     11    |   22
	-------------------------------------------   */
	printf("Enter 4 values of matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("A[%d][%d]=",r,c);
//			printf("A[%d]=",r);
            scanf("%d",&A[r][c]);
        //  scanf("%d",&A[r][c]);  //11
          //scanf("%d",&A[r][c]);//22
		}
	}
	printf("4 values of matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("A[%d][%d]=%d\t",r,c,A[r][c]);
    }
	
	printf("\n");
}
}
