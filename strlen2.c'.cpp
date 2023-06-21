//without using string .h
#include<stdio.h>
main()
{
	char str[50];
	int len;
	printf("Enter your string:");
	gets(str);//a b c '\0'
	//str[0] str[1] str[2] str[3] ---------str[49]
	//a       b       c    '\0'
	//special loop without body
	for(len=0;str[len]!='\0';len++);
	//first time for();
	printf("\nstring length is:%d",len);
}
