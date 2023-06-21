//returning and receiving 
#include<stdio.h>
//1.Declaration/prototyping
//returntype Name of function(parameters):
double sumf(double,double);
main()
{
	double dv1,dv2,rst;
	printf("Enter two values:\n");
	scanf("%lf%lf",&dv1,&dv2);
	  //calling
	rst=sumf(dv1,dv2); //passing/sending/actual argument
	printf("sum=%lf",rst);
	  
}
//3.definition
//receiving/accepting/formal arguments
double sumf(double dno1,double dno2)
{
	return (dno1+dno2);
}
