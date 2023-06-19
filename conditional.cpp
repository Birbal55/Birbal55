#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int ino1,ino2;
	system("cls");
	cout<<"Enter two values:";
	cin>>ino1>>ino2;
	ino1==ino2?cout<<"Both are equal\n":(ino1>ino2)?cout<<"First is big\n":cout<<"Second is big\n";
	system("pause");
}
