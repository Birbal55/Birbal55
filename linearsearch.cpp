#include<iostream>
using namespace std;
int main()
{
	int A[10]={11,2,17,5,6,3,12,10 ,4,9};//static array
	//static input
	//Dynamic input
	//main part of program
	int sno;
	cout<<"Enter number for search:";
	cin>>sno;
	int r;
	for(r=0;r<10;r++)
	{
		if(sno==A[r])
		{
			cout<<"Found";
			break;
		}
	}
	if(r==10)
	  cout<<"Not Found";
}
