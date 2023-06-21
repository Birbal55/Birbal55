#include<stdio.h>
main()
{
	int *ip1=NULL,*ip2=NULL,*ip3=NULL;
	            //stdio.h  #define NULL 0
	int ino1,ino2,ino3;
	system("cls");
	ino1=100;
	ino2=200;
	ip1=&ino1;
	ip2=&ino2;
	ip3=&ino3;
	*ip3=*ip1+ *ip2;
	/*     |     |
	     1020x   NULL
	       |       |
	       200     0
	            +
	            *ip3=200
	               |   //put
	             assign value (store)
				   |
				   1030x  &ino3
				     |
					200
					*/
	printf("\nino3=%d\n",ino3);
	system("pause");				   
}
