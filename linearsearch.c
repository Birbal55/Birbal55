#include<stdio.h>
int main()
{
	//static array/static initialization
	int A[10]={11,2,17,5,6,3,12,10,4,9};//static array
	//static input
	//Dynamic input
	//main part of program
	int sno,r;
	printf("\nEnter number for search:");
	scanf("%d",&sno);
	for(r=0;r<10;r++)
	{
		if(sno==A[r])
		{
			printf("Found");
			break;
		}
	}
	if(r==10)
	  printf("Not Found");
}
