#include<iostream>
#include<conio.h>
using namespace std;
int top=-1,size;

void push(int *stack,int val)
{
		system("cls");
		   if(top==size-1)
			{
				cout<<"Overflow";
				
			}
			else
			{
			
				top++;
				stack[top]=val;
	      }
	
}
void printstack(int *stack)
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
	cout<<"\n";
    system("pause");
}

int main()
{
	int *stack,val;
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
	  	 	
				cout<<"\nEnter any value:";
				cin>>val;
	  	 	push(stack,val);
	  	 break;
	  	 case 2:
	  	 break;
		 case 3:
		 	  printstack(stack);
		 break;
		 default:
		 	cout<<"\nwrong choice:";	
		  }    
		  
	cout<<"Press esc for exit any key cont..";
	}while(getch()!=27);
		return 0;
}
