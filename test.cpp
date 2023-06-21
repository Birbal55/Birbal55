#include<iostream>
using namespace std;
int main()
{
	int r,nst,marks,sum=0;
	cout<<"Enter number of students:"<<endl;
	cin>>nst;
	int *A=new int[nst];
	cout<<"Enter marks for "<<nst<<" students:"<<endl;
	for(r=0;r<nst;r++)
	{
		cin>>A[r];
	}
	cout<<"Sum of marks of "<<nst<<" students===>"<<endl;
	for(r=0;r<nst;r++)
    {
    	sum+=A[r];
	}

	
}
