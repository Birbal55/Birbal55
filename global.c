#include<stdio.h>
int gno;
void fun();
main()
{
	int lno1; //local variable of main fun()
	//life start when main function called
	//life over when main () call over
	//scope within main() only
	printf("\nMain local variable value=%d",lno1);
//	printf("\nfun local variable value=%d",lno2);  //error
    printf("\nGlobal variable value=%d",gno);
    gno=1000;
    fun();  //called
}
void fun()
{
	int lno2; //local variable of fun()
	          //life start when fun() is called
	          //life over when fun() call over
	          //scope with fun() only
//	printf("\nMain local variable value=%d",lno1);//error
    printf("\nfun local variable value =%d",lno2);
	printf ("\nMain local variable value=%d",gno);         
}
