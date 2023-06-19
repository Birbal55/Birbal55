//programming for printing array in reverse order
#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[5],r;
	printf("Enter 5 Array values:\n");
	for(r=0;r<5;r++)
	{
		printf("A[%d]:",r);
		scanf("%d",&A[r]);
	}
	system("pause");
	printf("\nArray values in reverse order:\n");
	for(r=4;r>=0;r--)  //reverse(only one line)
	{
		printf("\nA[%d]=%d",r,A[r]);
	}

}
