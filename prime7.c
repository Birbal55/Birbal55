#include<stdio.h>
#include<math.h>
int main()
{
	int ino,r,size;
	printf("Enter the number:");
	scanf("%d",&size);
	for(ino=2;ino<=size;ino++)
	{
		r=2;
		while(r<=(int)sqrt(ino))
		{
			if(ino%r==0)
			  break;
			r++;  
		}
		if(r==(int)sqrt(ino)+1)
		  printf("\n%d",ino);
	}
}
