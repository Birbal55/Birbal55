//programm to calculate square root of given number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	//sqrt -----double   sqrt(double)
	double dbase;
	system("cls");
	printf("Enter base:");
	scanf("%lf",&dbase);
	printf("square root of %.2lf is %.2lf\n",dbase,sqrt(dbase));
	system("\npause");
}
