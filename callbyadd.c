//call by address
#include<stdio.h>
void change(int *);
int main()
{
	int iv=200;
	printf("\nBefore change fun iv=%d",iv);
	//iv(passing/sending/actual argument) 
	change(&iv);//address(call by address)
	printf("\nAfter calling change fun iv=%d",iv);
}
//receiving /accepting/formal argument =iptr=&iv=1010x
void change(int *iptr)
{
	*iptr=*iptr+100;
	//in call by address technique if we change value of formal argument(ino) change value of actual argument(iv)
}

