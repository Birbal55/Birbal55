#include<iostream>
using namespace std;
int main()
{
	int *A,*B,*C,r,size1,size2,count;
	cout<<"Enter size of first Array:";
	cin>>size1;
	A=new int[size1];
	C=new int[count];
	cout<<"\nEnter "<<size1<<"values for Array:\n";
	for(r=0;r<size1;r++)
	{
		cin>>A[r];
		if(A[r]%2==0)
		{
			C[count]=A[r];
			count++;
		}
	
	}

	cout<<"Enter size of second Array:";
	cin>>size2;
	B=new int[size2];
	cout<<"\nEnter "<<size2<<"values for Array:\n";
	for(r=0;r<size2;r++)
	{
		cin>>B[r];
		if(B[r]%2!=0)
		{
	        C[count]=B[r];
	        count++;
	
		}
	
	}
    
     cout<<"\nValues of new Array:\n";
     for(r=0;r<count;r++)
     {
     	cout<<C[r]<<"";
	 }
	 
	 delete []A;
	 delete []B;
	 delete []C;
	 
	 return 0;
     
}
