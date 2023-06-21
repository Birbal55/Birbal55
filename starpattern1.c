#include<stdio.h>
main()
{
	int r,c,size1,size2;//dynamic in size
	printf("Enter size of row and column:");
	scanf("%d%d",&size1,&size2);
	for(r=1;r<=size1;r++)
	{
		for(c=1;c<=size2;c++)
		  printf("*");
		printf("\n");  
	}
}
