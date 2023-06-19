#include<iostream>
using namespace std;

int fib(int num)
{
	if(num<=1)
		return num;
	
	
	return fib(num-1)+fib(num-2);
	
}

int main()
{
	for(int r=0;r<=10;r++)
	cout<<fib(r)<<"\t";
	return 0;
}
