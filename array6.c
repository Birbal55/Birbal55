//programm to find array at even index
#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[10],r;
	printf("Enter 10 array values:\n");
	for(r=0;r<10;r++)
	{
		printf("A[%d]:",r);
		scanf("%d",&A[r]);
	}
	system("pause");
	printf("\nEven index values:\n");
	for(r=0;r<10;r+=2)
	{
		printf("\nA[%d]=%d",r,A[r]);
	}
}


