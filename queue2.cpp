#include<iostream>
#include<conio.h>
using namespace std;
int front=0,rear=-1,*queue,item,size;
int enqueue()
{
	
	if(rear>=size-1)
	{
	cout<<"Queue full(Overflow)";
	return 0;
	}
	else
	{
	cout<<"\nEnter any value:";
	cin>>item;
	
	queue[++rear]=item;
	}
					
}
int  dqueue()
{
	            
	if(front==rear||front<0)
	{
		cout<<"Queue empty(underflow)";
		rear=-1;  
		return 0;
    }
    else
	{
       item=queue[front++];
       cout<<"item delete from queue is:"<<item<<endl;
    }
}
void printqueue()
{
	
	cout<<"\nQueue is:\n";
	for(int r=front;r<=rear;r++)
	{
		cout<<"\t"<<queue[r]<<"<==";
	}
}
int main()
{
	
	cout<<"\nEnter size of queue:";
	cin>>size;
	queue=new int[size];
	do
	
	{
		system("cls");
		int ich;
		cout<<"\n1.Enqueue";
		cout<<"\n2.Dqueue";
		cout<<"\n3.Show Queue";
		cout<<"\nEnter your choice:";
		cin>>ich;
		switch(ich)
		{
			case 1:
		       enqueue();
			break;
		    case 2:
		    	dqueue();
			break;
			case 3:
			    printqueue();		
		    break;
			default:
				cout<<"Wrong choice";
		}//switch closed
		
		cout<<"Press esc for exit";
	}while(getch()!=27);
	
	
}
