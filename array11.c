//search rollno
#include<stdio.h>
main()
{
	int Rno[10],r,sno;
	printf("Enter 10 students Rno:\n");
	for(r=0;r<10;r++)
	{
		printf("\nEnter student %d Rno:",r+1);
		scanf("%d",&Rno[r]);
	}
	system("cls");
	printf("Enter Rno for search:");
	scanf("%d",&sno);
	for(r=0;r<10;r++)  //end when r==10
	{
		if(Rno[r]==sno)  //end using break
		{
			printf("Student Rno found");
			break;
		}
		if(r==10)
		  printf("Student Rno not found");
	}
}
