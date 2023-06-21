#include<stdio.h>
#include<stdlib.h>
main()
{
	/*
	int num,r=1,count=0;
	system("cls");
	printf("Enter any number:");
	scanf("%d",&num);//input ----check its prime or not
	while(r<=num)
	{
		if(num%r==0)
		   count++;
		r++;   	
	}
	 if(count==2)
	   printf("\nIts a prime number\n");
	 else
	   printf("\nIts not prime number\n");
	 system("pause");    
	 */
	 
	 /*  OR*/
	 
	 int num,r=2;
	 system("cls");
	 printf("Enter any number:");
	 scanf("%d",&num);
	 while(r<=num/2)
	 {
	 	if(num%r==0)
	 	{
	 		printf("\nIts not a prime number\n");
	 		break;
		 }
		 r++;
	 }
	 if(r==num/2+1)
	   printf("\nIts prime number\n");
	 system("pause");  
}
