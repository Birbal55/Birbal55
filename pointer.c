#include<stdio.h>
main()
{
	int ino=6422172;
	/*  ino(identifier)
	      --------------
	           100           operation
	      --------------
            1010x (location)=address(4byte)*/
            printf("\nvalue ino=%d",ino);
            printf("\naddress of ino=%d",&ino);
            printf("\naddress of ino=%o",&ino); //octal
            printf("\naddress of ino=%x",&ino);//hexa abcde
            printf("\naddress of ino=%X",&ino);//hexa ABCDE
            printf("\naddress of ino=%p",&ino);//%p=%X===full bit
}
