#include<stdio.h>
main()
{
	int r,c;
	for(r=97;r<=101;r++) //	for(r='a';r<='e';r++)
	{
		for(c=r;c<=101;c++)  //	for(r='a';r<='e';r++)
		  printf("%c",c);
		printf("\n");  
	}
}
