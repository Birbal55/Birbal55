#include<iostream>
using namespace std;
int fact1(int num)
{
	if(num==0)
		return 1;
	else
		num=num*fact1(num-1);//when something its remaing to be done after recursion
		                    //its tail recursion
	return num;
}


int fact2(int num)
{
	if(num==0)
		return 1;
	else
		return num*fact2(num-1);//when nothing to be done after recursion
		                    //its non-tail recursion
	
}
int main()
{


cout<<"Factorial by using fact1: "<<fact1(5);	
				   
cout<<"\nFactorial by using fact2:"<<fact2(5);	
				   
	     
	     
	     
	     
	
	
	return 0;
}
