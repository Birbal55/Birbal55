#include<stdio.h>
int gno;
void fun();
main()
{
	int lno1;
	printf("\nMain local variable value=%d",lno1);
//	printf("\nfun local variable value=%d",lno2);//error
    printf("\nGlobal variable value=%d",gno);
    gno=1000;
    fun(); //called

}//main function over here ----lno1---dead
void fun()
{
	int lno2;
//	printf("\nMain local variable value=%d",lno1);//error
    printf("\nfun local variable value=%d",lno2);
    printf("\nGlobal variable value=%d",gno);
}//fun()----lno2 ---dead

//programm over ---gno --dead
