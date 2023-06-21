#include<stdio.h>
int main()
{
   int a=1,b=2,c=3,k,m,n;
   for(k=0;k<=3;k++)
   {
   	  for(m=k;m<=k+1;m++)
   	  {
   	  	for(n=m;n<=m+1;n++)
   	  	b=b+1;
		 }
   }
   printf("%d",b);
}
