#include<stdio.h>
int main()
{
	int size,sum=0,num,temp;
	int f=1;
	printf("Enter size :");
	scanf("%d",&size);
	for(num=2;num<=size;num+=2)
	{
		temp=size;
		while(temp>=2)
		{
			f*=temp;
			temp--;
		}
		sum+=f;
	}
	printf("Sum=%d",sum);
}
