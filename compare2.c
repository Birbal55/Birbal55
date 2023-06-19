//weight comparision of two product
#include<stdio.h>
#include<stdlib.h>
main()
{
	float w1,w2;
	system("cls");
	printf("Enter weight of two product:");
	scanf("%f%f",&w1,&w2);
	//compare
	if(w1==w2)
	  printf("Weight are equal\n");
	else if(w1>w2)
	  printf("w1 is big\n");
	else 
	  printf("w2 is big\n");
	system("pause");  
	    
}
