//without using string.h
#include<stdio.h>
main()
{
	char str[50];
	int len;
	printf("Enter your string:");
	gets(str);
	//special loop without body
	for(len=0;str[len]!='\0';len++);
	printf("\nstring reverse is:");
	for(len=len-1;len>0;len--)
	printf("%c",str[len]);
}
