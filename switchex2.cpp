#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	double dno1,dno2;
	char cch;
	while(1)
	{
		system("cls");
		cout<<"\nSelct your operator +,-,*,/==>:";
		cin>>cch;
		system("cls");
		//selection .... switch
		 if(cch=='+'||cch=='-'||cch=='*'||cch=='/')
		 {
		 	cout<<"\nEnter two values:";
		 	cin>>dno1>>dno2;
		 }
		 switch(cch)
		 {
		 	case '+':
		 		cout<<"\nSum="<<dno1+dno2;
		 	break;
			case '-':
			    cout<<"\nSub="<<dno1-dno2;
			break;
			case '*':
			    cout<<"\nMul="<<dno1*dno2;
			break;
			case '/':
			    cout<<"\nDiv="<<dno1/dno2;
			break;
			default:
			    cout<<"\/Invalid chouce";			 	
		 }
		 cin.ignore();
		 cout<<endl;system("pause");
	}//while
}
