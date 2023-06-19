#include<stdio.h>
#include<stdlib.h>
main()
{
	int iage;
	system("cls");
	printf("Enter your age:");
	scanf("%d",&iage);
	//nested if
	if(iage>=18)  //outer if
	{
		if(iage<=123) //inner if
		  printf("Allowed to vote\n");
		else
		  printf("Not allowed to vote overage\n");  
	}
	else
	  printf("Not allowed to vote underage\n");
	system("pause");  
}
