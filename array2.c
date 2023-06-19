#include<stdio.h>
main()
{
	int A[10],r;
	/*
	A  10*4=40 bytes
        0     1      2       3       4       5       6      7        8     	 9
	--------------------------------------------------------------------------------
	      |      |       |       |       |       |       |       |        |        |
	--------------------------------------------------------------------------------
	1010x  1014x  1018x   1022x    1026x   1030x    1034x  1038x   1042x    1046x
	A[0]   A[1]    A[2]    A[3]     A[4]    A[5]     A[6]   A[7]    A[8]     A[9]
	*/
	printf("Enter 10 values of Array:\n");
	for(r=0;r<10;r++)
	{
		printf("A[%d]=",r);
		scanf("%d",&A[r]);
	}
	system("cls");
	system("pause");
	system("cls");
	/*
	printf("10 values of Array are:\n");
	for(r=0;r<10;r++)
	{
		printf("A[%d]=",r);
		printf("%d",A[r]);
		//getch();
		sleep(1);
	}
	*/
	printf("10 values of Array are:");
	for(r=0;r<10;r++)
	{
		/*
		printf("A[%d]=",r);
		printf("%d\n",A[r]);
		*/
		printf("\nA[%d]=%d",r,A[r]);
		//getch();
		sleep(1);
	}
}
