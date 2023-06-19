#include<stdio.h>
main()
{
	int A[10],r,esum=0,osum=0;
	//value==check====A[r]%2
	//index ===check====r%2
	printf("Enter 10 values of A:\n");
	for(r=0;r<10;r++)
	{
		printf("A[%d]=",r);
		scanf("%d",&A[r]);
		if(r%2==0)
		  esum+=A[r];
		else
		  osum+=A[r];  
	}
	printf("\nsum of even index values of array=%d",esum);
	printf("\nsum of odd index values of array=%d",osum);
}
