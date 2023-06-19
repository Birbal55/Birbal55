#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *A,size,sno,lb=0,ub=size-1;
	int mid,r;
	printf("Enter size of array:");
	scanf("%d",&size);
	A=(int*)malloc(size*4);
	printf("\nEnter value of array:");
	for(r=0;r<size;r++)
	{
	   scanf("%d",&A[r]);	
	}
	printf("\nEnter number for search:");
	scanf("%d",&sno);
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(A[mid]==sno)
		{
			printf("Found");
			break;
		}
		if(A[mid]>=sno)
		  ub=mid-1;
		if(A[mid]<=sno)
		  lb=mid+1;   
	}
	if(lb>ub)
	{
		printf("Not Found");
	}
	    
}
