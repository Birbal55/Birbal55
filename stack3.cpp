#include<iostream>
#include<conio.h>
using namespace std;

void push(int *stack,int &top,int size)
{
	int val;
		system("cls");
		   if(top==size-1)
			{
				cout<<"Overflow";
				
			}
			else
			{
			   cout<<"\nEnter any value:";
				cin>>val;
	
			
				top++;
				stack[top]=val;
	      }
	
}
void printstack(int *stack,int top)
{
	int r=top;
	system("cls");
	cout<<"top is:"<<top;
	cout<<"\nYour stack is:";
	while(r>=0)
	{
	
		cout<<"\nStack["<<r<<"]="<<stack[r]<<endl;
		r--;
     }
	 
	 
	 }

int main()
{
	int *stack,top=-1,size;
	int ich;
	cout<<"\nEnter size of Array:";
	cin>>size; //3
		//Dynamic memory allocation for stack
	stack=new int[size];
	do
	{
		system("cls");
	  cout<<"\n1.Push";
	  cout<<"\n2.Pop";
	  cout<<"\n3.stack is";
	  cout<<"\nEnter your choice:";
	  cin>>ich;
	  system("cls");  
	  switch(ich)
	  {
	  	 case 1:
	  	 	    
				
	  	 	    push(stack,top,size);
	  	 break;
	  	 case 2:
	  	 break;
		 case 3:
		 	  printstack(stack,top);
		 break;
		 default:
		 	cout<<"\nwrong choice:";	
		  }    
		  
	cout<<"Press esc for exit any key cont..";
	}while(getch()!=27);
		return 0;
}
