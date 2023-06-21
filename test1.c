#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int num;
	long long int f=1;
	printf("Enter any value:");
	scanf("%d",&num);
	while(num>=2)
	{
		f*=num;
		num--;
		}	
		printf("Factorial is %d",f);
}
