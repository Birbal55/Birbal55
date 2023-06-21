//priogramm to calculate sin value
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	double dval;
	system("cls");
	printf("Enter value for sin:");
	scanf("%lf",&dval);
	printf("\nsin(%.2lf)=%lf",dval,sin(dval));
	printf("\nsin(%.2lf)=%lf\n",dval,sin(dval*3.141592));
	system("pause");
}
