#include<stdio.h>
int ino1=100;
main()
{
	int ino2=200;
	{
		int ino3=300;
		printf("\nino1=%d",ino1);
		printf("\nino2=%d",ino2);
		printf("\nino3=%d",ino3);
	}//block over ino3 dead
	printf("\nino1=%d",ino1);
	printf("\nino2=%d",ino2);
//	printf("\nino3=%d",ino3);//error
}
