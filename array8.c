//sum of even values of array
#include<stdio.h>
main()
{
	int A[10],r,sum=0;
	printf("Enter 10 values of A:\n");
	for(r=0;r<10;r++)
	{
		printf("A[%d]=",r);
		scanf("%d",&A[r]);
		if(A[r]%2==0)
		  sum+=A[r];
	}
/*
	for(r=0;r<10;r++)
	{
		sum+=A[r];
	}

	*/
	printf("\nSum of even values of array=%d",sum);
}

