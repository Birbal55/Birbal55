//programm to find even values of array
#include<stdio.h>
main()
{
	int A[10],r;
	printf("Enter 10 values of A:\n");
	for(r=0;r<10;r++)
	{
		printf("A[%d]=",r);
		scanf("%d",&A[r]);
		
	}
	//process
	printf("Even value of Array are:\n");
	for(r=0;r<10;r++)
	{
		if(A[r]%2==0)
		printf("\nA[%d]=%d",r,A[r]);
	}
}
