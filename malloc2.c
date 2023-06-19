#include<stdio.h>
main()
{
	int r,num;
	float *marks,fsum=0;
	printf("Enter number of students in your class:\n");
	scanf("%d",&num);
	//Dyanamic memory allocation
	marks=(float*)malloc(num*4);
	printf("Enter %d student marks:",num);
	for(r=0;r<num;r++)
	{
		scanf("%f",&marks[r]);//marks+r=r+marks=&r[marks]
		fsum+=marks[r];
	}
	printf("\nSum of marks=%f",fsum);
	fclose(marks);
}
