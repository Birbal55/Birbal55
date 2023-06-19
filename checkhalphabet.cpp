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
	if(cv>=97 && cv<=122)
	  cout<<"Its a lower case alphabet\n";
	else if(cv>=65 && cv<=90)
	  cout<<"Its a upper case alphabet\n";
	else
	  cout<<"Its not a alphabet\n";
	system("pause");      
}
