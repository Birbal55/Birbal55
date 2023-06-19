#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[3][3],r,c;
	printf("Enter 9 values of Array:\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("A[%d][%d]=",r,c);
			scanf("%d",&A[r][c]);
		}
	}
	system("cls");
	system("pause");
	system("cls");
	printf("\n9 values of array:\n");
	for(r=0;r>3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("A[%d][%d]=%d\t",r,c,A[r][c]);
		}
		printf("\n");
	}
	/*
	printf("Middle row of matrix:\n");
	for(r=0;r<3;r++)
	{
		printf("A[1][%d]=%d\t",c,A[1][c]);
	}
	*/
	printf("\nDigonal 2 of matrix:\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			if((r+c)%2==0)
			  printf("A[%d][%d]=%d\t",r,c,A[r][c]);
			else
			  printf("A[%d][%d]=--\t",r,c);  
		}
		printf("\n");
	}
}
