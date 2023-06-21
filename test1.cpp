#include<iostream>
using namespace std;
int main()
{
	int r,nst;
	float marks,sum=0;
	cout<<"Enter number of students:"<<endl;
	cin>>nst;
	int *A=new int[nst];
	cout<<"Enter marks for "<<nst<<" students:"<<endl;
	for(r=0;r<nst;r++)
	{
		cin>>A[r];
		sum+=A[r];
	}
	cout<<"Sum of marks of "<<nst<<" students===>"<<sum<<endl;
	
    
	

	
}
