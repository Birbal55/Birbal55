#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	/*
	int num,digit,temp,sum=0;
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		sum+=digit*digit*digit;
		temp/=10;
	}
	if(sum==num)
	  cout<<num<< " its an armstrong number ";
	else
	  cout<<num<< " its not an armstrong number ";  
	  */
	  
	int num,digit,temp,n=0;
	float sum=0.0;
	scanf("%d",num);
	temp=num;
    for(temp=num;temp!=0;++n)
    {
    	temp/=10;
	}
	for(temp=num;temp!=0;temp/=10)
	{
		digit=temp%10;
		sum+=pow(digit,n);
	}
	if ((int)sum == num)
      cout<<num<<" is an Armstrong number.";
    else
      cout<<num<<" is not an Armstrong number.";
    return 0;
}
