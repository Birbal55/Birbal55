#include<stdio.h>
#include<stdlib.h>
main()
{
	char cv;  //int=char format are not allowed to dwap 
	system("cls");
	printf("Enter any character:");
	scanf("%c",&cv);
	printf("char is =%c ASCII code=%d\n",cv,cv);
	system("pause");
	
}
