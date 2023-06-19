#include<iostream>
using namespace std;
int main()
{
	int *A,r,size;//Dynamic array
	cout<<"\nEnter size of array:";
	cin>>size;
	A=new int[size];
	//Dynamic input
	cout<<"\nEnter "<<size<<" value of array:";
	for( r=0;r<size;r++)
	{
		cin>>A[r];
	}
	//main part of program
	int sno;
	cout<<"\nEnter number for search:";
	cin>>sno;
	for( r=0;r<size;r++)
	{
		if(sno==A[r])
		{
			cout<<"Found";
			break;
		}
	}
	if(r==size)
	  cout<<"Not Found";
}
