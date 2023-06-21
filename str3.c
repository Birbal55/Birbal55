//Entity student ===rno(int) name(string=chararray) marks float age (int)
#include<stdio.h>
main()
{
	int rno,age;
	char name[20];
	float marks;
	printf("Enter student Details:");
	printf("\nEnter Rno=>");
	scanf("%d",&rno);
	printf("Enter Name=>");
	//buffer flushing problem
	//Console (keyboard)input
	//when you accept string/char input after any number input ----string/char input will skipped
	fflush(stdin);
	gets(name);
	printf("Enter Age=>");
	scanf("%d",&age);
	printf("Enter Marks=>");
	scanf("%f",&marks);
	system("cls");
	system("pause");
	system("cls");
	printf("Details of student:\n");
	printf("\nRno====>%d",rno);
	printf("\nName====>%s",name);
	printf("\nAge====>%d",age);
	printf("\nMarks====>%f",marks);
}
