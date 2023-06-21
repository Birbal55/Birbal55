#include<stdio.h>
main()
{
	int r,c,size;
	printf("Enter size of row :");
	scanf("%d",&size);
	for(r=1;r<=size;r++)
	{
		for(c=size-1;c>=r;c--)
		{
			printf(" ");
			
		}
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
