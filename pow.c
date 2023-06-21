#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	double dbase,dpow;
	system("cls");
	printf("Enter base and power:");
	scanf("%lf%lf",&dbase,&dpow);
	//printf("Result=%.2lf",pow(dbase,dpow));
	//syntax:double pow(double,double)
	printf("\n%.2lf power %.2lf=%lf\n",dbase,dpow,pow(dbase,dpow));
	system("pause");
}
