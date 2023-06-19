#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[2][2],B[2][2],r,c;
	printf("Enter 4 values of matrix A:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("A[%d][%d]=",r,c);
			scanf("%d",&A[r][c]);
		}
	}
	printf("Enter 4 values of matrix B:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("B[%d][%d]=",r,c);
			scanf("%d",&B[r][c]);
		}
	}
	system("cls");
//	print A
    printf("\nMatrix A values are:\n");
    for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	  printf("A[%d][%d]=%d\t",r,c,A[r][c]);
    	printf("\n");//outer loop new line  
		
	}
//	print B
    printf("\nMatrix B values are:\n");
    for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	  printf("B[%d][%d]=%d\t",r,c,B[r][c]);
    	printf("\n");  
	}
	//process
	printf("\nSum of array values:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		  printf("A[%d][%d]+B[%d][%d]=%d\t",r,c,r,c,A[r][c]+B[r][c]);
		printf("\n");  
	}
}
