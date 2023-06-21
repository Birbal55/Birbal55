#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the number:";
	cin>>size;
	for(int ino=2;ino<=size;ino++)
	{
		int r=2;
		while(r<=(int)sqrt(ino))
		{
			if(ino%r==0)
			  break;
			r++;  
		}
		if(r==(int)sqrt(ino)+1)
		  cout<<"\n"<<ino;
	}
}
