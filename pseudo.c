#include<stdio.h>
int main()
{
	int a=32,b=0,c=4,d=0,i=0;
	while(a>c)
	{
		b=(c+d);
		d =( c << i);
		while(b<15)
		{
			printf("%d",d);
			d=d+4;
			b=b+4;
		}
		c=c+16;
	}
	printf("%d",b);
}
