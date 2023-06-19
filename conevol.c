#include<stdlib.h>
#include<stdio.h>
main()
{
	double drad,dh;
	system("cls");
	printf("Enter radius and height:");
	scanf("%lf%lf",&drad,&dh);
	printf("Volume of cone=%lf",1.04797*drad*drad*dh);
	system("pause");
}
