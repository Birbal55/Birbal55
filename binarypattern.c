#include<stdio.h>
main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(r%2==0)
			  printf("0");
			else
			  printf("1");
			    
		}
		printf("\n");
		  
	}
}
