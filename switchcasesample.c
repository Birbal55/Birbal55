#include<stdio.h>
#include<stdlib.h>
main()
{
	int ino;
	system("cls");
	printf("Press 1,2 or 3:\n");
	scanf("%d",&ino);
	switch(ino)
	{
		//case constant(integer(int/char))
		case 1: //auto camparision
		      printf("1 pressed");
		      //here anything
		break;
		case 2:
		      printf("2 pressed");
		break;
		case 3:
		      printf("3 pressed");
		break;
		default: //else
		      printf("wrong input");
		system("pause");	  	  	        
	}
}
