#include<stdio.h>
int main()
{
	int ino,r,size;
	int count;
	printf("Enter the number:");
	scanf("%d",&size);
	for(ino=1;ino<=size;ino++)
	{
		r=1;
		count=0;
		while(r<=ino)
        {
        	if(ino%r==0)
        	  count++;
        	r++;  
		}
		if(count==2)
		  printf("\n%d",ino);
		  	
	}
}
