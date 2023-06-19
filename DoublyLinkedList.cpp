#include<iostream>
#include<conio.h>

using namespace std;

struct  Node{
	int info;
	Node *next,*pre;
};
Node *start=NULL,*save=NULL,*nptr=NULL;



Node* Create_New_Node(int inf){
	nptr=new Node;
	nptr->info=inf;
	nptr->next=NULL;
	nptr->pre=NULL;
	return nptr;	
}
void insert_into_end(Node *ptr)
{
	if(start==NULL) 
	{
		start=save=nptr;
	}
	else
	{
		nptr->pre=save;
		save->next=nptr;
		save=nptr;
	}
}

void show_forward()
{
	Node *ptr=start;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<"=>"<<"\t";
		ptr=ptr->next;
	}
}
void show_backward()
{
	Node *ptr=save;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<"=>"<<"\t";
		ptr=ptr->pre;
	}
}
void delete_end()
{
	Node *ptr,*temp;
	ptr=save;
	temp=save->pre;
	temp->next=NULL;
	save=temp;
	delete ptr;
}
void delete_begin()
{
	Node *ptr;
	ptr=start;
	start=start->next;
	start->pre=NULL;
	delete ptr;
}
int main()
{
	int data,ich;
	do
	{
		system("cls");
		cout<<"\n1.insert end";
		cout<<"\n2.show from forword";
		cout<<"\n3.show from backword";
		cout<<"\n4.delete from end";
		cout<<"\n5.delete from start";
		cout<<"\nEnter your choice:";
		cin>>ich;
		switch(ich)
		{
			case 1:
				cout<<"\nEnter Any Value:";
				cin>>data;
				nptr=Create_New_Node(data);
				insert_into_end(nptr);
			break;
			case 2:
				show_forward();
			break;
			case 3:
				show_backward();
			break;
			case 4:
				delete_end();
			break;
			case 5:
				delete_begin();
			break;
			default:
				cout<<"\nWrong choice";
				
		}//switch 
		
		
		cout<<"\npress esc for exit any key to cont..";
	}while(getch()!=27);
	
	
	
	return 0;
}
