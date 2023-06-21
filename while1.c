#include<stdio.h>
#include<stdlib.h>
main()
{
	int ino=2;
	system("cls");
	while(ino<=1024)
	{
		printf("\n%d",ino);
		//ino=ino*2;
		ino*=2;
	}
	printf("\n");
	system("pause");
}
