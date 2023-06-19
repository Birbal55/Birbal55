#include<stdio.h>
int main()
{
	int r,c,size;
	printf("Enter size of row:");
	scanf("%d",&size);
	for(r=1;r<=size;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(r==1||r==size||c==1||c==r)
			  printf("*");
			else
			  printf(" ");  
		}
		printf("\n");
	}
}
