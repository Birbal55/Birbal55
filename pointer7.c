#include<stdio.h>
main()
{
	int iv,*ip;
	char cv,*cp;
	double dv,*dp;
	printf("\nsize of int variable=%d",sizeof(iv));
	printf("\nsize of int pointer variable=%d",sizeof(ip));
	printf("\nsize of char variable =%d",sizeof(cv));
	printf("\nsize of char pointer variable=%d",sizeof(cp));
	printf("\nsize of double variable =%d",sizeof(dv));
	printf("\nsize of double pointer variable=%d",sizeof(dp));
	
	//turboC++ (16bit compilation)
	//pointer deal with address ==16bit ==2byte (each type of pointer)
	//devC++/codeblocks(32bit)
	//pointer deal with address (32bit) 4byte (each type of pointer)
//	devC++ /codeblocks(64bit)
//pointer deal with address (64bit) 8byte(each type of pointer)
}
