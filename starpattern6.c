#include<stdio.h>
main()
{
	int r,c,size;
	printf("Enter size of row:");
	scanf("%d",&size);
	/*
	for(r=1;r<=size;r++)
	{
		for(c=size-1;c>=r;c--)
		  printf(" ");
		for(c=1;c<=r;c++)
		  printf("* ");
		printf("\n");    
	}
	for(r=1;r<=size-1;r++)
	{
		for(c=1;c<=r;c++)
		  printf(" ");
		for(c=size-1;c>=r;c--)
		  printf("* ");
		printf("\n");    
	}
	*/
	for(r=1;r<=size;r++)
	{
		if(r<=(size+1)/2)
		{
			for(c=size/2;c>=r;c--)
			  printf(" ");
			for(c=1;c<=r;c++)
			  printf("* ");
			printf("\n");    
		}
		else
		{
			for(c=size/2+2;c<=r;c++)
			  printf(" ");
			for(c=size;c>=r;c--)
			  printf("* ");
			printf("\n");    
		}
	}
	
}

