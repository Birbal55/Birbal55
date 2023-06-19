#include<stdio.h>
int main()
{
	int A[10]={5,7,9,11,13,19,22,35,40,45};
	int sno,lb=0,ub=9,mid;
	printf("Enter number for search:");
	scanf("%d",&sno);
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(A[mid]==sno)
		{
			printf("Found");
			break;
		}
		if(A[mid]>sno)
		  ub=mid-1;
		if(A[mid]<sno)
		  lb=mid+1;  
	}
	if(lb>ub)
	{
		printf("Not Found");
	}
}
