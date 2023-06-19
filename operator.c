#include<stdio.h>
main()
{
	int p=2,q=1,r=3;
    if(q|| q&r)
    {
    	p=p+p;
    	if(p>q || p<r)
    	  r=p+p;
    	p=r;
		if(p>q && p>r)
		  q=q+p;
		    
	}
   printf("%d",p+q+r);//
}
