//non returning and receiving two values function
//Name of functio :sumf()
//receive :double,double
//return:void
#include<stdio.h>
//1.Declaration/prototyping
//returntype name of function(parameters);
void sumf(double,double);
main()//main entry point of programm
{
    double dv1,dv2;
    printf("Enter two values:\n");
    scanf("%lf%lf",&dv1,&dv2);
         //calling
    sumf(dv1,dv2); //passing /sending/actual argument
	              //dv1,dv2(pass values)
    //3.definition'//receiving/accepting/formal arguments
	void sumf(double dno1,double dno2)
	{
		printf("\nsum=%lf",dno1+dno2);
	}				       
}
