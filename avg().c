//non returning and non receiving 
//name:avgf()
//receiving :void
//return:void
#include<stdio.h>

//prototyping of function
void avgf(void);
main()
{
	//calling
	avgf();
}
void avgf(void)
{
	//declare
	double dno1,dno2,dno3;
	//input'
	printf("Enter three values:\n");
	scanf("%lf%lf%lf",&dno1,&dno2,&dno3);
	printf("Average=%lf",(dno1+dno2+dno3)/3);
}
