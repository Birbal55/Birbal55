#include<stdio.h>
main()
{
	int r,c,size;
	printf("Enter size of row :");
	scanf("%d",&size);
	for(r=1;r<=size;r++)
	{
		for(c=1;c<=r;c++)
		  printf("*");
		printf("\n");  
	}
}
/* 

main()
{
	int r,c;
//	for(r=1;r<=5;r++)
	for(r=5;r>=1;r--)
	{
		for(c=5;c>=r;c--)
		  printf("*");
		printf("\n");  
	}
}*/
