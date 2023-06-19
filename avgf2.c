//non returning and receiving three values
//name:avgf()
//receiving:dno1,dno2,dno3
//return:void
#include<stdio.h>
//prototyping of function
void avgf(double,double,double);
main()
{
	//declare
	double dno1,dno2,dno3;
	//input
	printf("Enter three values:\n");
	scanf("%lf%lf%lf",&dno1,&dno2,&dno3);
	//calling
	avgf(dno1,dno2,dno3);//passing/actual/sending arguments ===>dno1,dno2,dno3(value pass)
	
}
//double dv1,dv2,dv3  // wrong here
//type and number of parameters
//dv1,dv2,dv3(receiving,accepting,formal arguments) dv1=value(dno1) dv2=value(dno2)  dv3=value(dno3)
void avgf(double dv1,double dv2,double dv3)
{
	//process+output
	printf("Average=%lf",(dv1+dv2+dv3)/3.0);
}
