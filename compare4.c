#include<stdio.h>
#include<stdlib.h>
main()
{
	int ino1,ino2;
	system("cls");
	printf("Enter two values:");
	scanf("%d%d",&ino1,&ino2);
	ino1==ino2?printf("Equal value\n"):(ino1>ino2)?printf("First is big\n"):printf("Second is big\n");
	system("pause");
}
