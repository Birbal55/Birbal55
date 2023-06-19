//compare two values
//Name of function:compare
//receive:two values
//return:void
#include<stdio.h>
void compare(double,double);
main()
{
	double dv1,dv2;
	printf("Enter two values:\n");
	scanf("%lf%lf",&dv1,&dv2);
	compare(dv1,dv2);
}
void compare(double dv1,double dv2)
{
	if(dv1==dv2)
	  printf("Equal");
	else if(dv1>dv2)
	  printf("First value is big");
	else
	  printf("second value is big");    
}
