#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ino1,ino2;
	int *iptr1=&ino1,*iptr2=&ino2;
	*iptr2=200;
	*iptr1=300;
	ino1=500;
	*iptr2=ino1+*iptr1;
	cout<<"ino1+ino2="<<ino1+ino2;
	return 0;
}
