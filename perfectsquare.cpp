#include<iostream>
using namespace std;
int main()
{
	int ino,temp;
	cout<<"Enter a number:";
	cin>>ino;
	for(int r=0;r<=ino/2;r++)
	{
		if(ino==r*r)
		{
		    temp=1;
		    break;	
		}
		else
		  temp=0;
		 
	}
	if(temp==1)
	  cout<<"Its a perfect number";
	else
	  cout<<"Not a perfect number";   
	 
		  
		  
}        
