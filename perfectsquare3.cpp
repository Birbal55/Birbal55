#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int ino1,ino2,sum=0;
	cout<<"\nEnter Range ";
	cin>>ino1>>ino2;
	for(int r=ino1;r<=ino2;r++)
	{
		int num=r;
		if((sqrt(num*num)==(sqrt(num)*sqrt(num))) && r!=1)
		{
			sum=num+sum;
		}
		
	}
	cout<<"\nSum="<<sum;
}
