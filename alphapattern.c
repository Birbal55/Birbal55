#include<stdio.h>
main()
{
	int r,c;
	for(r=97;r<=101;r++)  //	for(r='a';r<='e';r++)
	{
		for(c=97;c<=r;c++)  //	for(r='a';r<=r;r++)
		  printf("%c",c);
		printf("\n");  
	}
}
