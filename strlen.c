//strlen()===>syntax:int strlen(char*(string))
#include<stdio.h>
#include<string.h>  //using string.h
main()
{
	char str[50];
	printf("Enter your string:");
	gets(str);
	//return string length without include '\0'
	printf("string length is:%d",strlen(str));
}
