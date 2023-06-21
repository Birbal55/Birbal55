#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num1,num2,sum=0;
	cin>>num1;
	cin>>num2;
	for(int r=num1;r<=num2;r++)
	{
		if( r*r>num1 && r*r<=num2)
		{
			sum+=r*r;
		}
		
	}
	cout<<sum;
}
