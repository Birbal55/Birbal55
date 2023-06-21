#include<stdio.h>
main()
{
	int r,c,size;
	printf("Enter size of row:");
	scanf("%d",&size);
	for(r=size;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		  printf("*");
		printf("\n");  
	}
}
