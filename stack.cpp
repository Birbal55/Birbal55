#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int *stack,size,top=-1,val;
	
		cout<<"\nEnter size of Array:";
		cin>>size; //3
		//Dynamic memory allocation for stack
		stack=new int[size];
	do
	{
		system("cls");
		   if(top==size-1)
			{
				cout<<"Overflow";
				break;
			}
			else
			{
			
				cout<<"\nEnter any value:";
				cin>>val;
				top++;
				stack[top]=val;
	      }
	      
	cout<<"Press esc for exit any key to add more:";
	}while(getch()!=27);
	
	system("cls");
	cout<<"\nYour stack is:";
	for(int r=top;r>=0;r--)
		cout<<"\nStack["<<r<<"]="<<stack[r]<<endl;
	return 0;
}
