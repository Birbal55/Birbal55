#include<stdio.h>
#include<stdlib.h>
main()
{
	int num;
	long f=1;
	system("cls");
	printf("Enter any number:");
	scanf("%d",&num);
	if(num>=0)
	{
		while(num>=2)
		{
			f=f*num;
			num--;
		}
		 printf("\nFactorial=%d",f);
	}
	else
	  printf("\nInvalid input");
	
}
