#include<stdio.h>
#include<stdlib.h>
main()
{
	char cv;
	system("cls");
	printf("Enter any character:");
	scanf("%c",&cv);
    //input character is a lower or upper char
	if(cv>=97 && cv<=122)
	  printf("Its a lower case alphabet\n");
	else if(cv>=65 && cv<=90)
	  printf("Its a upper case alphabet\n");
	else
	  printf("Its not a alphabet\n");
	system("pause");      	
}
