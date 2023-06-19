#include<stdio.h>
main()
{
	int r,c,ino=1,size;
	printf("Enter size:");
	scanf("%d",&size);
	for(r=1;r<=size;r++)
	{
		for(c=1;c<=r;c++)
		    printf("%d",ino++);
		printf("\n");    
	}
}
