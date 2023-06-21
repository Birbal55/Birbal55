#include<stdio.h>
int main()
{
	int x=10,y=20,z=30;
	scanf("%d%d%d",&x,&y,&z);
	printf("Before swap x=%d y=%d z=%d",x,y,z);
	x=x+y+z;
	y=x-y-z;
	z=x-y-z;
	x=x-y-z;
	printf("After swap x=%d y=%d z=%d",x,y,z);
}
