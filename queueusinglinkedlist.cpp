#include<iostream>
#include<conio.h>
using namespace std;

struct  Node{
	int info;
	Node *next;
}*front,*rear,*newptr,*nptr;

Node* Create_New_Node(int inf){

	nptr=new Node;
	nptr->info=inf;
	return nptr;	
}
void enqueue(Node *ptr)
{
	if(front==NULL) 
	{
		front=rear=ptr;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
	}
}

void dequeue()
{
	if(front==NULL) 
		cout<<"queue is empty";
	else
		{
			nptr=front;
			front=front->next;
			delete nptr;
		}
}
void showQueue(Node *ptr){
	
	while(ptr!=NULL)
	{
		cout<<ptr->info<<"<=="<<"\t";
		ptr=ptr->next;
	}
	cout<<"\n";
}

int main()
{
	front=rear=newptr=NULL;
	int data,ich;
	do
	{
		system("cls");
		cout<<"\n1.enqueue";
		cout<<"\n2.Display";
		cout<<"\n3.dequeue";
		cout<<"\nEnter your choice:";
		cin>>ich;
		switch(ich)
		{
			case 1:
				//enqueue
				cout<<"\nEnter new value:";
				cin>>data;
				newptr=Create_New_Node(data);
				if(newptr==NULL)
				{
				 	cout<<"failed";
				 	break;
				}	
				enqueue(newptr);
			break;
			case 2:
				//display
				showQueue(nptr);
			break;
			case 3:
				//dequeue
				dequeue();
			break;
			default:
				cout<<"\nWrong choice";
				
		}//switch 
		
		
		cout<<"\npress esc for exit any key to cont..";
	}while(getch()!=27);
	
	
	
	return 0;
}
