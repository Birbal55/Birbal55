#include<stdio.h>
//by default return type of any c programming
//function its int
//return function(parameters)
//fun1(void);//by default int
//fun1(void);
   //by default receiving type its void
//int fun1();//by default int
//fun1(void);
void fun1();
void fun2(void);
main()
{
	printf("Main function (entry point) of programm\ncalling fun1\n");
	system("pause");
	fun1();//direct call
	printf("Back Main function (exit point) of programm\n");
	system("pause");
}
void fun1()
{
	printf("function 1(entry point) of programm\ncalling fun2\n");
	system("pause");
	fun2();//indirect call
	printf("Back function1(exit point) of programm\n");
	system("pause");
}
void fun2(void)
{
	printf("function 2 for exit\n");
	system("pause");
}
