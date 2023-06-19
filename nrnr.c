//non returning and non receiving function
//Name of function: sumf()
//receive :void
//return :void
#include<stdio.h>
//1.Declaration/Prototyping 
//returntype nameoffunction(parameters);
void sumf(void);
main()  //main entry point of programm
{
   sumf();
}
//3.definition
//returntype name of function(arguments/parameters)
void sumf(void)
{
	double dno1,dno2;
	printf("Enter two values:\n");
	scanf("%lf%lf",&dno1,&dno2);
	printf("sum=%lf",dno1+dno2);
}
