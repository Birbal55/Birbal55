#include<stdio.h>
main()
{
	//float-----size 10----input-----output
	//step 1.  declare array
	float A[10];
	int r;
	//A[0]=11.11   A[1]=22.22
	
	//step 2 input by using loop
	printf("Enter 10 values of Array:\n");
	for(r=0;r<10;r++)
	{
		printf("A[%d]=",r);
		scanf("%f",&A[r]);
	}
	system("cls");
	system("pause");
	system("cls");
	//step 3
	printf("10 values of Array are:\n");
	for(r=0;r<10;r++)
	{
		printf("\nA[%d]=%f",r,A[r]);
		sleep(1);
	}
}
