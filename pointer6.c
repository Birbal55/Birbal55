#include<stdio.h>
//wild pointer 
//pointer precaution
//never dereference any referenced pointer,it cause of your programm crash or memory crash(computer)xxxx
main()
{
	int *ip1,*ip2,*ip3;
	   //stdio.h  #define NULL  0
	int ino1,ino2,ino3;
	ino1=100;
	ino2=200;
	ip1=&ino1;
	ip2=&ino2;
	ip3=&ino3;
	*ip3=*ip1+ *ip2;
	/*     |      |
	     1010x    garbage value
		   |         |
		  100     unexpected value(programm may be crash)
		       *
			   *ip3=300
			      |          //put
				 assign value(store)
				   | 
				  1030x        &ino3
				    |
					300
					*/
	printf("\nino3=%d",ino3);      
}
