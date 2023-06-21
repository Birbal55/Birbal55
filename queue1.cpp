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
		
					if(rear>=size-1)
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
					
			break;
		    case 2:
		    	/* 
		    	     0     			    rear=3                                       
		    	 ----------------------------------------------------
		    	    100    |200  |300 |
		    	 -----------------------------------------------------
		    	 		 front=1
		    	*/
		    	if(front == rear || front<0)
		    	{
					cout<<"Queue empty(underflow)";
				//	rear=-1;
					//return 0;
					break;
			    }
			    else
				{
			       item=queue[front++];
			       cout<<"item delete from queue is:"<<item<<endl;
		        }
			break;
			case 3:
				
				cout<<"\nQueue is:\n";
				for(int r=front;r<=rear;r++)
				{
					cout<<"\t"<<queue[r]<<"<==";
					}	
		    break;
			default:
				cout<<"Wrong choice";
		}//switch closed
		
		cout<<"Press esc for exit";
	}while(getch()!=27);
	
	
}
