//search marks
#include<stdio.h>
main()
{
	float marks[10],sno;
	int r,count=0;
	printf("Enter 10 students marks:");
	for(r=0;r<10;r++)
	{
		printf("\nEnter student %d marks:",r+1);
		scanf("%f",&marks[r]);
	}
	system("cls");
	printf("Enter marks for search:");
	scanf("%f",&sno);
	for(r=0;r<10;r++)
	{
		if(marks[r]==sno)
		  count++;
	}
	if(count!=0)
	  printf("%d times found",count);
	else
	  printf("marks not found");  
}
