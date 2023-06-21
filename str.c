#include<stdio.h>
main()
{
	/*
	char str[20];
	printf("Enter your string(word):");
	scanf("%s",&str); //scanf()---accept word only 
	printf("\nString is:%s",str);
	*/
	
	char str[20];
	printf("Enter your string(word):");
	//scanf("%s",&str); //scanf()---accept word only 
	gets(str); //line (multiple words(with space))
	printf("\nString is:%s",str);
}


