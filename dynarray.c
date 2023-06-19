#include<stdio.h>
main()
{
	int A[5],r;
	/*
	Array:its not but pointer pointing to continuos memory block base address
	
	pointer    Increment/Decrement
	            int ==byte
	            char==byte
	            float=byte
	            double==8byte
	            
	A=pointer=&A[0]=A+0=0+A=&0[A]=1010x []+
	           A[0] A[1] A[2] A[3] A[4]
			   A+0  A+1  A+2  A+3  A+4
			   1010x+0 1010x+1 1010x+2---
			   1010x  1014x  1018x  1022x  1026x
    //why array index start from zero
	//why pointer type same:because when pointer increment/decrement according to its type
	*/
	printf("Enter 5 values:");
	for(r=0;r<5;r++)
	{
		scanf("%d",A+r);//A+r=r+A=&r[A]=&A[r]
	}
	printf("\n5 values of array:\n");
	for(r=0;r<5;r++)
	{
		printf("\n%d",*(A+r));//*(A+r)=*(r+A)=r[A]=A[r]
	}			   
			              
}
