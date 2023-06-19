#include<iostream>
using namespace std;
int main()
{
	int sum=0,temp,size;
	cout<<"Enter size:";
	cin>>size;
	for(int num=2;num<=size;num+=2)
	{
		int f=1;
		temp=num;
		while(temp>2)
		{
			f*=temp;
			temp--;
		}
		sum+=f;
	}
	cout<<"Sum of factorial of even number"<<sum;

}
