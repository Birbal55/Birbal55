//strrev() string reverse
//syntax:char*(string) reverse(char*(string))
#include<stdio.h>
#include<string.h>
main()
{
	char str[5000];
	printf("Enter your string:");
	gets(str);
	printf("\nReverse of string length is:%s",strrev(str));
}
