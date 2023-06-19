#include<stdio.h>
main()
{
	int num,sum=0,f,temp,size;
	printf("Enter size:");
	scanf("%d",&size);
	for(num=2;num<=size;num+=2)
	{
		f=1;
		temp=num;
		while(temp>=2)
		{
			f*=temp;
			temp--;
		}
		sum+=f;
	}
	printf("sum of even number of factorial:%d",sum);
}
