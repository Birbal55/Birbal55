//without using string.h
#include<stdio.h>
main()
{
	char str[50];
	int r;
	printf("Enter your string:");
	gets(str);
	for(r=0;str[r]!='\0';r++)
	{
		if(str[r]>='a' && str[r]<='z')
		  printf("%c",str[r]-32);
		else
		  printf("%c",str[r]);  
	}
}
