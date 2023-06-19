//programm to check roll no
#include<stdio.h>
main()
{
	int Rno[10],r;
	printf("Enter 10 student Rno:\n");
	for(r=0;r<10;r++)
	{
		printf("Enter student %d Rno:",r+1);
		scanf("%d",&Rno[r]);
		
	}
	system("cls");
	system("pause");
	system("cls");
	printf("10 student Rno are:\n");
	for(r=0;r<10;r++)
	{
		printf("\nStudent %d Rno : %d",r+1,Rno[r]);
		sleep(1);
	}
}
