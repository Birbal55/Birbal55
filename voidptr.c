#include<stdio.h>
main()
{
	int ino;
	double dno;
	void *vptr; //void pointer its possible because each type of pointer takes same size
	//zero size variable not possible void variable
	ino=100;
	vptr=&ino;
	     //vptr
	     //int----4byte
	printf("\n%d",*(int*)vptr);
	dno=11.11;
	vptr=&dno;
	printf("\n%lf",*(double*)vptr);     
}
