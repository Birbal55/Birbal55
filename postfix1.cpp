#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;

int top=-1;
char *infix,*postfix,*stack;
int size;
	
int c=0;

int precedence(char ch){
	switch(ch)
	{
		case '^': return 5;
		case '*': return 4;
		case '/': return 4;
		case '+': return 3;
		case '-': return 3;
		default: return 0;
	}
}

char pop()
{
	char cv='$';
	
	if(top!=-1)
	  {
	  	cv=stack[top];
	  	top--;
	  	return cv;
	  }
	else
	{
		return cv;
	}
}
char topelement()
{
     if(top==-1)  cout<<"empty stack";
	 else
	   return stack[top];	
}
void push(char ch)
{
	if(top!=size-1)
	{
	   top++;
	   stack[top]=ch;	
	}
}

int braces(char *s)
{
	int leftbr=0,rightbr=0;
	for(int r=0;s[r]!='\0';r++)
	  {
	  	if(s[r]=='(')
	  		leftbr++;
	  	else if(s[r]==')')
	  	    rightbr++;
	  	  
	  }
	  if(leftbr==rightbr) 
	     return 0;
	  else if(leftbr<rightbr)
	  	return 1;
	  else return -1;
}

int main()
{
	char cv;
	cout<<"\nEnter number character in expression:";
	cin>>size;
	infix=new char[size];
	postfix=new char[size];
	stack=new char[size];
	cout<<"Enter any infix expression:";
	cin.ignore();
	cin>>infix;
	
	int chk=braces(infix);   //2+3)+4-3  ,(2+3)+4-3
	if(chk!=0)
	{
		cout<<"unbalanced no of braces";
		(chk==1)?cout<<"right braces )":cout<<"left braces("<<endl;
		getch();
		exit(1);
	}
	else
	{
		cout<<"Blanced infix"<<endl;
	}
	

	for(int r=0;infix[r]!='\0';r++)
	{
		
		if(infix[r]!='(' && infix[r]!=')'&& infix[r]!='^' && infix[r]!='*' && infix[r]!='/'&& infix[r]!='+' && infix[r]!='-')
           postfix[c++]=infix[r];
		   
		else if( infix[r]=='(')
		  {
		  	push(infix[r]);
		  }
		else if(infix[r]==')')
		{                                     
			cv=infix[r];
			while((cv==pop())!='(')
		    {
		    	postfix[c++]=cv;
			  
			}
		} 
		else{
			cv=infix[r];
			
			int pre1=precedence(cv);
			char ele=topelement();
			int pre2=precedence(ele);
			if(pre1>pre2) push(cv);
			else
			{
				while(pre2>=pre1)
				{
					if (ele=='$')
					  break;
				   char popele=pop();
				  
					ele=topelement();
				    postfix[r++]=popele;
				    pre2=precedence(ele);
				}
			}
			push(cv);
		}
		
	
		
		    		         
		
		
		
		
		
	}
	
	
	while((cv=pop())!='$')
		{
			postfix[c++]=cv;
			
		}
		
		postfix[c]='\0';
		
		

	cout<<"infix is:"<<infix<<endl;
	return 0;
}
