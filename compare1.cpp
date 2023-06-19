#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	double dno1,dno2;
	system("cls");
	cout<<"Enter two values:";
	cin>>dno1>>dno2;
	//compare
	if(dno1==dno2)
	  cout<<"Both are equal\n";
	else if(dno1>dno2)
	  cout<<"First is big\n";
	else
	  cout<<"Second is big\n";
	system("pause");      
}
