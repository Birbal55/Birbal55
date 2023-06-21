#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	if(num==sqrt(num))
	  cout<<"Its a perfect number";
	else
	  cout<<"Not a perfect number";  
}
