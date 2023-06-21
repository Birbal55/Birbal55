#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the number:";
	cin>>size;
	for(int ino=1;ino<=size;ino++)
	{
		int r=1;
		int count=0;
		while(r<=ino)
		{
			if(ino%r==0)
			  count++;
			r++;  
		}
		if(count==2)
		  cout<<"\n"<<ino;
	}
}
