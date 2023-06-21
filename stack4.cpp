#include<iostream>
using namespace std;

struct Node{
	
	int data;
	Node *next; //self referential structure
}*top,*newptr,*save,*ptr;

void push(Node *nptr)
{
	if(top==NULL) top=nptr;
	else
	{
		save=top;
		top=nptr;
		nptr->next=save;
	}
}
void print_stack(Node *newptr)
{
	while(newptr!=NULL)
	{
		cout<<newptr->info<<"=>";
		newptr=newptr->next;
	}
}
void pop(){
cout<<"stack top=>"<<top->data;
top=top->next;
}
int main()
{
	top=newptr=save=ptr=NULL:
	int ich,val;
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
	  	 	    cout<<"\nEnter value for node:";
	  	 	    cin>>val;
	  	 	    //create new node
	  	 	    newptr=new Node;
	  	 	    newptr->data=val;
	  	 	    newptr->next=NULL;
	  	 	    push(newptr);
	  	 break;
	  	 case 2:
	  	 	     //BaseAddres,ref
	  	 	    pop(stack,top);
	  	 	    cout<<endl;
	  	 	    printstack(stack,top);
		 	
	  	 break;
		 case 3:
		 	  printstack(top);
		 	
		 break;
		 default:
		 	cout<<"\nwrong choice:";	
		  }    
		  
	cout<<"Press esc for exit any key cont..";
	}while(getch()!=27);
		return 0;

	
	
	
	
	return 0;
}
