//Name of function:fact()
//receive:one value
//return:one value
#include<stdio.h>
long int fact(int);
main()
{
	int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	     //long int=%ld
	printf("\nFactorial=%ld",fact(num));     
}
long int fact(int num)
{
	long int f=1;
	while(num>=2)
	{
		f*=num;
		num--;
	}
}
