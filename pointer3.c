#include<stdio.h>
main()
{
	int ino; //normal int variable which deal with int type value
	int *iptr;//pointer (special) variable which deal with int type
	ino=100;
	//allocation
	//referencing(assign address)
	iptr=&ino;
	printf("\nvalue of ino=%d",ino);
	printf("\naddress of ino=%x",&ino);
	printf("\nvalue of iptr=%x",iptr);
	printf("\naddress of iptr=%x",&iptr);//
	//dereferencing
	printf("\nvalue at address which is pointed by pointer=%d",*iptr);
}
