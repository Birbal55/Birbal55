//compare two values
#include<stdio.h>
#include<stdlib.h>
main()
{
	double dno1,dno2;
	system("cls");
	printf("Enter two values:");
	scanf("%lf%lf",&dno1,&dno2);
	//compare
	if(dno1==dno2)
	  printf("Both are equal\n");
	else if(dno1>dno2)
	  printf("First is big\n");
	else
	  printf("Second is big\n");
	system("pause");      
}
