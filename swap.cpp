//programm to swapping of two number
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter two values:";
	cin>>x>>y;
	cout<<"Before swap "<<"x="<< x<<" y="<< y;
		//swapping
	/*t=x;
	x=y;
	y=t;
	*/
	/*
	x=x*y;
	y=x/y;
	x=x/y;
	*/
	
	x=x^y;
	y=x^y;
	x=x^y;
	/*
	x=x+y;
	y=x-y;
	x=x-y;
	*/
	cout<<"\nAfter swap "<<"x="<< x<<" y="<< y;
}
