//return and receiving three values
//name :avgf()
//receiving:dno1.dno2,dno3
//return:double
/*****
//function can receive zero or more values but it will return zero or one value only
//***in case of pointer /array==returning address(starting)
*****/
#include<stdio.h>
//prototyping of function
double avgf(double,double,double);
main()
{
	//declare
	double dno1,dno2,dno3;
	//input
	printf("Enter three values:\n");
	scanf("%lf%lf%lf",&dno1,&dno2,&dno3);
	//calling
	printf("Average=%lf",avgf(dno1,dno2,dno3));//passing/sending/actual arguments===dno1,dno2,dno3(value pass)
}
double avgf(double dv1,double dv2,double dv3)
{
	//process
	return((dv1+dv2+dv3)/3.0);
}
