//Void pointer 
//------------
//void pointer is a specific pointer type-void*-
//a pointer that pointds to some data location in storage,which doesn't have any specific type .
//void refers to the type .bassically the type of data that it points to is can be any
//if we assign address of char data type to void pointer it will become char pointer 
//if int data type then int pointer and so on.
//any pointer type is convertible to a void pointer hence it can point to any value.

//****//Important points
//----------------------
//1.Void pointer can't be dereferenced .it can however be done using typecasting the void pointer.
//2.Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size.

#include<stdlib.h>
int main()
{
	int x=4;
	float y=5.5;
	//A void pointer 
	void *ptr;
	ptr=&x;
	//(int *)ptr - does type casting of void
	//*((int*)ptr) dereferences the typecasted
	//void pointer variable.
	printf("Integer variable is = %d",*((int*)ptr));
	//void pointer is now float
	ptr=&y;
	printf("\nFloat variable is = %f",*((float*)ptr));
	
	return 0;
}
