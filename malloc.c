#include<stdio.h>
main()
{
	int *iptr,r,size; //12byte
	printf("Enter size of array:\n");
	scanf("%d",&size);
	//Dynamic memory allocation
	//iptr=(Datatype*)malloc(size*sizeof(int));
	iptr=(int*)malloc(size*4);
	   //malloc()----allocation---[20byte]
	   //void*===return(address==typecasting)
	   //iptr(int)pointer=4byte
	   printf("Enter %d values:",size);
	   for(r=0;r<size;r++)
	   {
	   	  scanf("%d",iptr+r);
	   }
	   printf("\n%d value of array:\n",size);
	   for(r=0;r<size;r++)
	   {
	   	  printf("\n%d",*(iptr+r));
	   }
	   free(iptr);
	   printf("\n");
	   system("pause");
}
