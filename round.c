#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	double dval=4.1;
	system("cls");
	printf("Round off value=%.0lf",dval);
	printf("\nRound down value=%lf",floor(dval));
	printf("\nRound up value=%lf\n",ceil(dval));
	system("pause");
}
