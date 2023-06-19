#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char cv;
	system("cls");
	cout<<"Enter any character:";
	cin>>cv;
	//input character is lower or upper case
	if((cv>='a' && cv<='z') || (cv>='A' && cv<='Z'))
	  cout<<"Its an alphabet\n";
	else if(cv>=0 && cv<=57)
	  cout<<"Its a digit\n";
	else
	  cout<<"Its a special character\n";
	system("pause");      
}
