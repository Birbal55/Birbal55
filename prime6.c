#include<stdio.h>
int main()
{
	int ino,r,size;
	printf("Enter the number:");
	scanf("%d",&size);
	for(ino=1;ino<=size;ino++)
	{
		r=2;
		while(r<=ino/2)
		{
			if(ino%r==0)
			  break;
			r++;  
		}
		if(r==(ino/2)+1)
		  printf("\n%d",ino);
	}
}
