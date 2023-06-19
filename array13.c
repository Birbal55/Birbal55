//teacher marks system
#include<stdio.h>
main()
{
	float marks[100],sno;
	int r,count,nstu,cont,ich;
	do
	{
		system("cls");
		printf("\n1.Input marks");
		printf("\n2.Show all marks");
		printf("\n3.Search marks");
		printf("\nEnter your choice:");
		scanf("%d",&ich);
		switch(ich)
		{
			case 1:
				//input code
				printf("How many students in your class:");
				scanf("%d",&nstu);
				for(r=0;r<nstu;r++)
				{
					printf("Enter student %d marks:",r+1);
					scanf("%f",&marks[r]);
				}
			break;
			case 2:
				//show all marks//nstu
				printf("Marks of %d students are:\n",nstu);
				for(r=0;r<nstu;r++)
				{
					printf("\nStudents %d marks:%f",r+1,marks[r]);
				}
			break;
			case 3:
			    printf("\n1.Equal marks");
				printf("\n2.Greater than marks");
				printf("\n3.Less than marks");
				printf("\nEnter your choice:");
				scanf("%d",&ich);
				switch(ich)
				{
					case 1:
						//equal
						printf("Enter marks for search:");
						scanf("%f",&sno);
						for(r=0;r<nstu;r++)
						{
							if(marks[r]==sno)
							  printf("\nStudent %d marks=%f",r+1,marks[r]);
						}
					break;
					case 2:
					     //marks[r]>sno
						 printf("Enter marks for search:");
						 scanf("%f",&sno);
						 for(r=0;r<nstu;r++)
						 {
						 	if(marks[r]>sno)
						 	  printf("\nStudent %d marks:%f",r+1,marks[r]);
							 
						 }
					break;
					case 3:
					      //marks[r]<sno
						  printf("Enter marks for search:");
						  scanf("%f",&sno);
						  for(r=0;r<nstu;r++)
						  {
						  	if(marks[r]<sno)
						  	  printf("\nStudent %d marks :%f",r+1,marks[r]);
						  }
					break;
					default:
					      printf("Wrong choice");	  	 	
					}	//inner switch over here
			break;
			default:
			     printf("wrong input");		
		}
		printf("\nPress 1 to cont.....");
		scanf("%d",&cont);
	}while(cont==1);
}
