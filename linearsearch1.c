#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *A,size,r,sno;//Dynamic array
	printf("Enter size of array:");
	scanf("%d",&size);
	A=(int*) malloc (size*4);
	//Dynamic input
	printf("\nEnter value of array:");
	for(r=0;r<size;r++)
	{
		scanf("%d",&A[r]);
	}
	//main part of program
	printf("\nEnter number for search:");
	scanf("%d",&sno);
	for(r=0;r<size;r++)
	{
		if(sno==A[r])
		{
			printf("Found");
			break;
		}
	}
	if(r==size)
	  printf("Not Found");
	
}
