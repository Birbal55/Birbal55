#include<stdio.h>
main()
{
	int A[]={10,20,30,40,50}; //static initialization way1
	 
	int r;
	int B[5];
	int C[5];
	//static initialization way2
	B[0]=11;
	B[1]=22;
	B[2]=33;
	B[3]=44;
	B[4]=55;
	printf("Enter 5 values of array c:");
    /*
	scanf("%d%d%d%d%d",&c[0],&c[1],&c[2],&c[3],&c[4]);
	scanf("%d",&c[0]); 
	scanf("%d",&c[1]);
	scanf("%d",&c[2]);
	scanf("%d",&c[3]);
	scanf("%d",&c[4]);
	*/
//	for(r=0;r<=4;r++)
	for(r=0;r<5;r++)
//	to repeat scanf 5 times ---->provide array index/subscript value
    {
    	scanf("%d",&C[r]);// r=0  c[0]  r=1  c[1]  r=2  c[2]  r=3  c[3]  r=4  c[4]  r=5(exit)  4<5 (false)
	}
	system("cls");
	printf("\nArray A values are:");
	for(r=0;r<5;r++)
	{
		printf("\n%d",A[r]);
	}
	printf("\nArray B values are:");
	for(r=0;r<5;r++)
	{
		printf("\n%d",B[r]);
	}
	printf("\nArray c values are:");
	for(r=0;r<5;r++)
	{
		printf("\n%d",C[r]);
	}
	 
}
