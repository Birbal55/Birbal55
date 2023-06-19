#include<windows.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int min,hrs,sec,a,err;
	err=a=0;
	while(err==0)
	{
		cout<<"Enter hour  : "<<endl;
		cin>>hrs;
		cout<<"Enter minutes  :  "<<endl;
		cin>>min;
		cout<<"Enter second  :  "<<endl;
		cin>>sec;
		
		
		if(hrs<24 && min<60 && sec<60)
		  err++;
		else
		  system("cls");  
	}
	while(a==0)
	{
		system("cls");
		cout<<hrs<<":"<<min<<":"<<sec<<endl;
		Sleep(1000);
		sec++;
		if(sec>59)
		{
			sec=0;
			min++;
		}
		if(min>59)
		{
			min=0;
			hrs++;
		}
		if(hrs>24)
		{
			hrs=0;
		}
	}
	return 0;
}
