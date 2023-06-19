#include<iostream>
using namespace std;
int main()
{
	int size,ino=1;
	cout<<"Enter size:";
	cin>>size;
	for(int r=1;r<=size;r++)
	{
		for(int c=1;c<=r;c++)
		  cout<<ino++;
		cout<<endl;  
	}
}
