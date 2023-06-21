#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the number:";
	cin>>size;
	for(int ino=1;ino<=size;ino++)
	{
		int r=2;
		while(r<=ino/2)
		{
			if(ino%r==0)
			  break;
			r++;  
		}
		if(r==(ino/2)+1)
		  cout<<ino<<endl;
	}
}
