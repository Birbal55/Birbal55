#include<iostream>
using namespace std;
int main()
{
	int r,c;
	printf("***********");
	for(c=1;c<=9;c++)
	{
		if(c<=5)
		  printf("%d",c);
		else
		  printf("%d",10-c);  
	}
	printf("\n");
	for(r=0;r<7;r++)
	{
		//loop1234
		printf("*");
		if(r<=3)
		{
			for(c=0;c<=r;c++)
			  printf("%d",c+1);
			  for(c=1;c<=2*r+1;c++)
			  printf(" ");
			  for(c=4;c>r;c--)
			    printf(" ");
		}
		else
		{
			//r==4
			for(c=0;c<=r;c++) //4,3,2,1
			  printf("%d",c+1);
			  for(c=1;c<=2*r+1;c++) //5,3,1
			    printf(" ");
			    for(c=4;c>r;c--) //1,2,3,4
			      printf(" ");
		}
		printf("*\n");
	}
	for(c=1;c<=9;c++)
    {
    	if(c<=5)
    	  printf("%d",6-c);
    	else
		  printf("%d");  
	}
	printf("\n");
}
