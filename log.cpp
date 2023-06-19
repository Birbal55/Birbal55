#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double dval;
	system("cls");
	cout<<"Enter value for log,log10,exp:";
	cin>>dval;
	cout<<"log="<<log(dval)<<endl;
	cout<<"log10="<<log10(dval)<<endl;
	cout<<"exp="<<exp(dval)<<endl;
	system("pause");
}
