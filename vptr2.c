#include<stdio.h>
main()
{
	int ino1,ino2;
	double dno1,dno2;
	void *vptr;
	ino1=100;
	ino2=200;
	vptr=&ino1;
	printf("\n%d",*(int*)vptr);
	vptr=&ino2;
	printf("\n%d",*(int*)vptr);
	dno1=11.11;
	vptr=&dno1;
	printf("\n%lf",*(double*)vptr);
	dno2=22.22;
	vptr=&dno2;
	printf("\n%lf",*(double*)vptr);
}
