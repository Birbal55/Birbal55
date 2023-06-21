#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	printf("Enter your string:");
	gets(str);
	printf("\nupper case of string:%s",strupr(str));
}
