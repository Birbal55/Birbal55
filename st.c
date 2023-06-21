#include<stdio.h>
int main()
{
	int r,c,size;
	printf("Enter size:");
	scanf("%d",&size);
	for(r=size;r>=1;r--)
	{
	   for(c=r;c>=1;c--)
	   	     printf("*");
	   printf("\n");  
	}
}
