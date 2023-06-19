//call by value
#include<stdio.h>
void change(int);
int main()
{
	int iv=200;
	printf("\nBefore calling change function iv=%d",iv);
	//iv (passing/sending/actual argument )(value)
	change(iv); //200 (call by value)
	printf("\nAfter calling change function iv=%d",iv);
}
//receiving/accepting/formal argument=ino=iv(value)=200
void change(int ino)
{
	ino=ino+100; 
	//in call by value technique if we change value of formal argument (ino) doesn't change the value of actual argument(iv)
}
