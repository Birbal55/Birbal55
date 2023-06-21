#include<iostream>
#include<conio.h>
using namespace std;
int front=-1,rear=-1,*queue,item,size;

void equeue()
{
	             //front=0,rear=4
	             
					if((front==0 && rear==size )|| (front==rear+1))
			           cout<<"Queue overflow";
					else if (rear==-1) front=rear=0;
					else if (rear==size) rear=0;
					 
					else{
					
						   cout<<"Enter value:";
						   cin>>item;
						   queue[rear++]=item; 			
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
			    else{
			       item=queue[front++];
			       cout<<"item delete from queue is:"<<item<<endl;
		         }
}
void printqueue()
{
	   if(front==-1) 
	   		cout<<"Queue its empty";
	   if(front<=rear)     //   ... ... f=2   rear=3
	   {
	   
				for(int r=front;r<rear;r++)
				{
					cout<<"\t"<<queue[r]<<"<==";
					}
		
		}
		else{  //  rear=1 .......front =5...........size  
			
				cout<<"\nQueue is:\n";	cout<<"\nQueue is:\n";
				for(int r=0;r<rear;r++)
				{
					cout<<"\t"<<queue[r]<<"<==";
					}
		
			
				for(int r=front;front<size;front++)
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
		       
			   equeue();
		       
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
