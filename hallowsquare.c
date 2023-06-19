#include<stdio.h>
int main()
{
	int r,c,size;
	printf("Enter row size:");
	scanf("%d",&size);
	for(r=1;r<=size;r++)
	{
		for(c=1;c<=size;c++)
		{
			if(r==1||r==size||c==1||c==size)
			  printf("*");
			else
			  printf(" ");  
		}
		printf("\n");
	}
}
