//compare two values
#include<stdlib.h>
#include<stdio.h>
main()
{
	double dno1,dno2;
	system("cls");
	printf("Enter two values:");
	scanf("%lf%lf",&dno1,&dno2);
	//compare
	if(dno1==dno2)
	  printf("Both are equal\n");
	if(dno1>dno2)
	  printf("First is big\n");
	if(dno1<dno2)
	  printf("Second is big\n");
	system("pause");      
}
