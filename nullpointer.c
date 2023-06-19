//NULL pointer
//--------------
//NULL pointer is a pointer which is pointing to nothing .
//in case, if we don't have address to be assigned to a pointer,then we can simply use NULL.
#include<stdio.h>
int main()
{
	//NULL pointer
	int *ptr=NULL;
	printf("The value of ptr is %p",ptr);
	
	return 0;
}

//important points 
//-----------------
//1.NULL vs Uninitialized pointer
//An uninitialized pointer stores an undefined value.
//A null pointer stores a defined value, but one that is defined by the environment to not be a valid address for any member or object.
//2.NULL vs Void Pointer 
//Null pointer is a value,while void pointer is a type.
