#include<iostream>
using namespace std;
int main()

{
	int r,c,ino=1,size;
	cout<<"Enter size:";
	cin>>size;
	for(r=1;r<=size;r++)
	{
		for(c=1;c<=r;c++)
		    cout<<ino++;
		cout<<endl;
	}
}
