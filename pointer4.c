#include<stdio.h>
main()
{
	int *ip1,*ip2,*ip3;
	int ino1,ino2,ino3;
	ino1=100;
	ino2=200;
	ip1=&ino1;
	ip2=&ino2;
	ip3=&ino3;
	*ip3=*ip1+ *ip2;
	/*    |      |
	    1010x   1020x
		  |       |
		  100    200
		       +
			   *ip3=300
			      |
				  assign value(store)
				   |
				  1030x        &ino3
				   | 
				   300
				   */
	printf("\nino3=%d",ino3);			     
	
}
