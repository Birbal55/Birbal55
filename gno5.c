#include<stdio.h>
int ino=100;  //global ino
main()
{
	int ino=200;//local variable level ino
	{
		int ino=300;//local block level ino
		            //block is used to define scope only
		printf("\nino=%d",ino);            
	}//block over
	printf("\nino=%d",ino);
}
