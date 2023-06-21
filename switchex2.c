#include<stdio.h>
#include<stdlib.h>
main()
{
	
	double dno1,dno2;
	char cch;
	//menu
	while(1)
	{
		system("cls");
		printf("\nSelect your operator +,-,*,/:");
		scanf("%c",&cch);
		system("cls");
		//selection..... switch
		 if(cch=='+'||cch=='-'||cch=='*'||cch=='/')
		 {
		   printf("\nEnter two values:");
		   scanf("%lf%lf",&dno1,&dno2);
		 }
		  
		
    
	switch(cch)
	{
		case '+':
			printf("\nSum=%lf",dno1+dno2);
		break;
		case '-':
		    printf("\nSub=%lf",dno1-dno2);
		break;
		case '*':
		    printf("\nMul=%lf",dno1*dno2);
		break;
		case '/':
		    printf("\nDiv=%lf",dno1/dno2);
		break;
		default:
		    printf("\nwrong choice");				
	}
	fflush(stdin);
	printf("\n");
	system("pause");
	
}//while
}

