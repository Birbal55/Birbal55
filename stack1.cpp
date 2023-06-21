#include<iostream>
#include<conio.h>
using namespace std;

          //Array as function argument,int top as ref variable ,int size
          //call by value,
          //call by address
          //call by reference
void push(int *stack,int &top,int size)
{       //call by addres,call by ref,call by value
	int val; 
	                              /*
	                                 size
	                                 ------
	                                   7
	                                 ------
	                                 val
	                                 -----
	                                 
	                                 ----
	                              */
		system("cls");
		   if(top==size-1)  //0==7-1
			{
				cout<<"Overflow";
				
			}
			else
			{
			   cout<<"\nEnter any value:";
				cin>>val; //200
	
			
				top++;  //top=1
				stack[top]=val; //1010x+1=1010x=100
	            stack[1]=200;  //1010x+1=1014=200;
		  }
	
}    
            //*stack
void pop(int stack[],int &tp)
{
	if(tp==-1)
		cout<<"Underflow";
	else
	{
		cout<<"Stack top value is:"<<stack[tp];
		tp--;
	}
	
}
void printstack(int *stack,int top)
{
	int r=top;
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
	cin>>size; //7
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
	  	 	    
				   //BaseAddress,(ref),7
	  	 	    push(stack,top,size);
	  	 	    cout<<endl;
	  	 	    printstack(stack,top);
		 	
	  	 break;
	  	 case 2:
	  	 	     //BaseAddres,ref
	  	 	    pop(stack,top);
	  	 	    cout<<endl;
	  	 	    printstack(stack,top);
		 	
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
