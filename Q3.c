#include<stdio.h>
int main()
{
	int a=1;
	while(printf("Raj "),(a<=5))
	{
		printf("KIT");
		if(a==3)
		{
			getch();
			continue;
		}
		printf("a=%d\n",a);
		a++;
	}
}
