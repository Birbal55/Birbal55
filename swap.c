#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	printf("Enter two values:");
	scanf("%d%d",&x,&y);
	printf("Before swap x=%d y=%d\n",x,y);
	//swapping
	/*t=x;
	x=y;
	y=t;
	*/
	/*
	x=x*y;
	y=x/y;
	x=x/y;
	*/
	/*
	x=x^y;
	y=x^y;
	x=^y;
	*/
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swap x=%d y=%d",x,y);
}
