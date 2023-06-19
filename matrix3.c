#include<stdio.h>
main()
{
	int A[2][2],r,c;
	printf("Enter 4 values of matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("A[%d][%d]=",r,c);
			scanf("%d",&A[r][c]);
		}
	}
	system("cls");
	system("pause");
	system("cls");
	printf("\nMatrix values are:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("A[%d][%d]=%d\t",r,c,A[r][c]);
		}
		printf("\n");
	}
	printf("\nSum of rows:\n");
} 
