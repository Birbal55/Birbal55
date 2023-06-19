#include<iostream>
using namespace std;
int main()
{
	int num,r,c,nexterm,t1=0,t2=1;
	cout<<"Enter number:";
	cin>>num;
	nexterm=t1+t2;
	cout<<"Fibonacci series "<< t1<<" "<< t2;
	for(int r=3;r<=num;++r)
	{
		cout<<" "<<nexterm;
	    t1=t2;
	    t2=nexterm;
	    nexterm=t1+t2;
	}
    return 0;
	
}
