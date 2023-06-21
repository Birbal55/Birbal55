#include<iostream>
using namespace std;
/*
int main()
{
	/*
	int size,sum=0;
	cout<<"Enter value:";
	cin>>size;
	for(int r=0;r<=size;r++)
	  sum+=r;
	cout<<"sum="<<sum;
	
	return 0;
	
	

	
}

	int SumValue(int num)
	{
		int sum=0;
		for(int r=0;r<num;r++)//loopingxxxx
		  sum+=r;
		return sum;  
	}
	int main()
	{
		int num;
		cout<<"Enter num:";
		cin>>num;
		
		cout<<"sum="<<SumValue(num);
	}
	
	*/
	
	/*
	int SumValue(int num)
	{
	    if(num==1)
	      return 1;
	    else
		  return num+SumValue(num-1);  //non-tail recursion
		 //num+=SumValue(num-1);
	//	return num; //tail recursion
	}
	int main()
	{
		int num;
		cout<<"Enter num:";
		cin>>num;
		cout<<"sum="<<SumValue(num);
	}
	*/
	
	int SumValue(int start,int end)
	{
	    if(start==end)
		  return start;
		else
		  return end+SumValue(start,end-1);   
	}
	int main()
	{
		int num1,num2;
		cout<<"Enter range:";
		cin>>num1>>num2;
		
		cout<<"sum="<<SumValue(num1,num2);
	}
	
