#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double dbase,dpow;
	system("cls");
	cout<<"Enter base and power:";
	cin>>dbase>>dpow;
	cout<<dbase<<"power"<<dpow<<"="<<pow(dbase,dpow)<<endl;
	system("pause");
}
