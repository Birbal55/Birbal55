#include<stdio.h>
int foo(int a,int b)
{
	if(a==0)
	  return b;
	else if(a==1)
	  return b+1;
	else
	  return foo(a-1,a+b+5) ;   
}
int main()
{
  
     //foo(3,4);
     printf("%d",foo(3,4));
}
