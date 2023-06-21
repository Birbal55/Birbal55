#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	double dbase,dpow;
	int ich;
	// menu
	printf("\n1.Press for square");
	printf("\n2.Press for cube");
	printf("\n3.Press for x power y");
	printf("\nEnter your choice:");
	scanf("%d",&ich);
	system("cls");


		switch(ich) //selection
		{
			case 1:
				  //square
				  printf("Enter any value:");
				  scanf("%lf",&dbase);
				  printf("\nSquare =%lf",dbase*dbase);
			break;
			case 2:
			      //cube programm
				  printf("Enter any value:");
				  scanf("%lf",&dbase);
				  printf("\nCube=%lf",dbase*dbase*dbase);
			break;
			case 3:
			      printf("Enter value of base and power:");
				  scanf("%lf%lf",&dbase,&dpow);
				  printf("\nAnswer=%lf",pow(dbase,dpow));
			break;
			default: //else
			      printf("wrong input");
				  	  	  	  
		} //switch block over here
		printf("\n");
		system("pause");
	}//main block over here

