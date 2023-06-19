#include<stdio.h>
int gno;
void fun1();
void fun2();
main()
{
	int lno1=100;
	printf("\nsum=%d",gno+lno1);
	gno=1000;
	fun1();
	fun2();
}
void fun1()
{
	int lno2=200;
	printf("\nsum=%d",gno+lno2);
	gno=111;
}
void fun2()
{
	int lno3=200;
	printf("\nsum=%d",gno+lno3);
}
