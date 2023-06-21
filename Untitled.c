//input 5/10/50(???)
//=====> (5  char words)
  //       97-122        99(c) 121(y) 100(d) ...
    //     print word

#include<stdio.h>
main()
{
	int start,end,r,d,temp;
	bool status;
	
	printf("Enter start and end of series:");
	scanf("%d%d",&start,&end);
	while(start<=end)
	{
		r=2;
		while(r<=start/2)
		{
		   if(start%r==0) 
		   	  break;
		   r++;		 	
		}
		if(r==start/2+1)
				{
				temp=start;//11
				status=true;
				d=0; 
				
				//finding sum of prime number digits
				while(temp!=0)
				{
				
				 	d=d+temp%10;
				 	
				 	temp/=10;
				}
				//d=2
				//prime loop  
				//d=2
				//???
				r=2;
				
				while(r<=d/2)
				{
					if(d%r==0)
						break;
						r++;
				}
				      //2,3,5,7
				if(r==d/2+1)
				printf("%d ",start);//????
			}
				
		start++;
	}
}
