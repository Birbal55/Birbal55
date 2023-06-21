#include<iostream>
using namespace std;
int count=1;
void fun2();
void fun1()
{
	if(count<=5)
	cout<<"\nFunction1 its called";
	fun2();
}

void fun2()
{
	count++;
	cout<<"\nFunction2 its called";
	fun1();
}

int main()
{
	fun1();
	
				   
	     
	     
	     
	     
	
	
	return 0;
}
