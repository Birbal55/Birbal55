#include<stdio.h>
main()
{
	int r,c,size;
	printf("Enter size of row:");
	scanf("%d",&size);
	for(r=size;r>=1;r-=2)
	{
		for(c=r/2+1;c<=r;c++)
		  printf("%d",c);
		printf("\n");  
	}
}
