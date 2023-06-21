//prime number
//name of function:checkprime()
//receive:one value
//return:void
#include<stdio.h>
#include<stdlib.h>
void checkprime(int);
main()
{
	int num,r=2;
	printf("Enter any value:\n");
	scanf("%d",&num);
	checkprime(num);
}
void checkprime(int num)
{
	int r=2;
	if(r<=num/2)
	{
		if(num%2==0)
		{
			printf("\nIts not a prime number");
			break;
		}
		r++;
	}
	if(r==(num/2)+1)
	  printf("\nIts a Prime number");
}
