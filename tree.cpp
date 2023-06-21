#include<iostream>
using namespace std;
struct Node
{
	int info;
	Node *leftchild;
	Node *rightchild;
};

Node* create_tree(int info,Node *nd)
{
	if(nd==NULL)
	{
		nd=new Node; //info leftchild,right
		nd->info=info;
		nd->leftchild=NULL;
		nd->rightchild=NULL;
	    return nd;
	}
	if(nd->info>info)
		nd->leftchild=create_tree(info,nd->leftchild);
	else
		nd->rightchild=create_tree(info,nd->rightchild);
	
	return nd;
	
}

void output(Node *nd,int l)
{
	int r;
    if(nd)
	{
      output(nd->rightchild,l+1); //right
	  for(int r=0;r<l;r++)
	      cout<<"\t";   
	  cout<<nd->info<<endl; //root
	  output(nd->leftchild,l+1); //right
	  
	  
	  		
		}	
	
}


int main()
{
	int info;
	do
	{
		cout<<"Enter info:";
		cin>>info;
		Node *T=NULL;
		T=create_tree(info,T);
		cout<<endl<<endl<<"Now Tree is:";
		output(T,1);
		cout<<"Press esc for exit:";
		cin.ignore();
	}while(getch()!=27);
}
