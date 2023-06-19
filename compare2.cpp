#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int iage;
	system("cls");
	cout<<"Enter your age:";
	cin>>iage;
	if(iage>=18) //outer if
	{
		if(iage<=123)  //inner if
		  cout<<"You are allowed to vote";
		else 
		  cout<<"You are not allowed to vote due to overage";  
	}
	else
	  cout<<"You are not allowed to vote due to underage";
	
}
