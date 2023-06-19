#include<iostream>
using namespace std;
int main()
{
	int *A,size,sno,lb=0,ub=size;
	cout<<"Enter size of array:";
	cin>>size;
	A=new int[size];
	cout<<"\nEnter value of array:";
	for(int r=0;r<size;r++)
    {
    	cin>>A[r];
	}
	cout<<"\nEnter number for search:";
	cin>>sno;
	while(lb<=ub)
	{
		int mid=(lb+ub-1)/2;
		if(A[mid]==sno)
		{
			cout<<"Found";
			break;
		}
		if(A[mid]>sno)
		  ub=mid-1;
		if(A[mid]<sno)
		  lb=mid+1;  
	}
	if(lb>ub)
	{
		cout<<"Not Found";
	}
}
