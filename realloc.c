#include<stdio.h>
#include<stdlib.h>
main()
{
	int r,size;
	float *marks,sum=0.0f;
	printf("Enter number of student:\n");
	scanf("%d",&size);
	//Dyanamic memory allocation
	marks=(float*)calloc(size,4);
	printf("Enter %d value of array:\n",size);
	for(r=0;r<size;r++)
	{
		scanf("%f",&marks[r]);
		sum+=marks[r];
	}
	printf("Sum of value=%f",sum);
	//free(marks);
	printf("\nEnter number of students:\n");
	scanf("%d",&size);
	//Dyanamic memory allocation
	marks=(float*)realloc(marks,size*4);
	printf("Enter %d values of array:\n",size);
	sum=0.0f;
	for(r=0;r<size;r++)
	{
		scanf("%f",&marks[r]);
		sum+=marks[r];
	}
	printf("Sum of values=%f",sum);
	free(marks);
}
