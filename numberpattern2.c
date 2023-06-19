#include<stdio.h>
main()
{
	int r,c,size;
	printf("Enter size of row:");
	scanf("%d",&size);
	for(r=1;r<=size;r++)
	{
		for(c=1;c<=r;c++)
		  printf("%d",c);
		printf("\n");  
	}
}
