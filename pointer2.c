#include<stdio.h>
main()
{
	int ino;  //normal variable which deal with same 
//	int iptr;//normal variable
    int *iptr; //pointer variable which deal with same type of address
    /* ino(identifier)
        ---------------
            100                operation
        ---------------
           1010x(location)=address(4byte)
           
           iptr
           --------------
           1010x(address)  value & ino (referencing)
           --------------
             2020x(location)4byte address
             */
    ino=100; //assign by same type of value
	iptr=&ino;//assign by same type of address
	//initialization=referencing
	printf("\nvalue ino=%d",ino);
	printf("\naddress of ino=%X ",&ino);//ABCD         
	printf("\nvalue of iptr(&ino)=%X ",iptr);         	
	printf("\naddress of iptr=%X ",&iptr);//ABCDEF //dereferencing         
	printf("\nvalue at address which is pointed by pointer =%d ",*iptr);//referencin,dereferencing ---->iptr,&iptr,*iptr         
} 
