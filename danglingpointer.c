//Dangling pointer
//------------------
//A pointer pointing to a memory location that has been deleted(or freed) is called dangling pointer.
//there are three ways where pointer acts as dangling pointer
//1.De-allocation of memory
  //Deallocating a memory pointed by ptr causes
  //dangling pointer
  
  /*
  #include<stdlib.h>
  #include<stdio.h>
  int main()
  {
  	int *ptr=(int*)malloc (sizeof(int));
  	//after  below free call      ,ptr become dangling pointer
  	free(ptr);
  	//no more a dangling pointer
  	ptr=NULL;
  }
  */
  
  
 //2.Function call
   //The pointer pointing to a local variable becomes
   //dangling when local variable is not static
  /*
   #include<stdio.h>
   int *fun()
   {
   	  //x is local variable and goes out of scope after an execution of fun() is over
   	  int x=5;
   	  return &x;
   	  
   }
   //Driver code
   int main()
   {
   	  int *p=fun();
   	  fflush(stdin);
   	  //p points to something which is not valid anymore
   	  printf("%d",*p);
   	  return 0;
   }
   */
   
   
   //or
   //The above problem doesn't appear (or p doesn't become dangling )if x is a static variable
   //The pointer pointing to a local variable doesn't become dangling when local variable is static.
  
  /* #include<stdio.h>
   int *fun()
   {
   	
   	  //x now has scope throughout the program 
   	  static int x=5;
   	  
   	  return &x;
   }
   int main()
   {
   	  int *p=fun();
   	  fflush(stdin);
   	  //not a dangling pointer as it points to a static variable.
   	  printf("%d",*p);
   }
   
   */
   //3.Variable goes out of scope
   
   void main()
   {
   	  int *ptr;
   	 // .......
   	  //.......
   	  
   	   {
   	  	 int ich;
   	  	 ptr=&ich;
		}
	//	.......//here ptr is dangling pointer
   }
  
