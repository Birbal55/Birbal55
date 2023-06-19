#include<stdio.h>
#include<stdlib.h>
main()
{
	char cv;
	system("cls");
	printf("Enter any character:");
	scanf("%c",&cv);
    //input character is a lower or upper char
	if((cv>='a' && cv<='z') || (cv>='A' && cv<='Z'))
	  printf("Its an alphabet\n");
	else if(cv>=0 && cv<=57)
	  printf("Its a digit\n");
	else
	  printf("Its  a special character\n");
	system("pause");      	
}
