//without function
//Array

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int size;
	int front=0,rear=-1,item;
	cout<<"\nEnter size of queue:";
	cin>>size;
	int *queue=new int[size];
	do
	{
		if(rear>=size)
		  {
		  	cout<<"Queue full(Overflow)";
		  	break;
		  }
		  else
		  {
		  	cout<<"\nEnter any value:";
		  	cin>>item;
		  	
		  	queue[++rear]=item;
		  }
		
	cout<<"\nQueue is:\n";
	for(int r=front;r<rear;r++)
	{
		cout<<"\t"<<queue[r]<<"<==";
		}	
	
		
		cout<<"Press esc for exit";
	}while(getch()!=27);
	
	
}
