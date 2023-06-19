#include<stdio.h>
//array as afunction argument
//Array=its pointer pointing to continuous memory block base address
//double sumArray(double []);
//double sumArray(double A[]);
//double sumArray(double A[5]);
double sumArray(double *A);
main()
{
	double A[5]={10.1,10.2,10.3,10.4,10.5};
	//Ar=(pointer )=&A[r]=Ar+0=0+Ar=Baseaddress=1010x
	//Ar[0]   Ar[1]   Ar[2]   Ar[3]    Ar[4]
	//Ar+0   Ar+1     Ar+2     Ar+3    Ar+4
	//1010x  1018x    1026x    1034x    1042x
	printf("sum=%lf",sumArray(A));
	   //Ar=&A[0]=1010x=BaseAddress
}
double sumArray(double *A)
{
	//*A(pointer)=1010x
	int r;
	double sum=0.0;
	for(r=0;r<5;r++)
	{
		            //r=0       r=1
		sum+=A[r];  //1010x+0   A[r]=1010x+1=1018x
//		              10.1           10.2
                     //sum=0+10.1=10.1  sum=10.1+10.2=20.3   
	}
	return sum;
	
}
