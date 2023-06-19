//programm to calculate log ,log10,exp
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	double dval;
	system("cls");
	printf("Enter value for log,log10,exp:");
	scanf("%lf",&dval);
	printf("\nlog(%.2lf)=%lf",dval,log(dval));
	printf("\nlog10(%.2lf)=%lf",dval,log10(dval));
	printf("\nexp(%.2lf)=%lf\n",dval,exp(dval));
	system("pause");
}
