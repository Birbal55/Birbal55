#include<stdio.h>
int main()
{
	/*
	int num,digit,temp,sum=0;
	scanf("%d",num);
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		sum+=digit*digit*digit;
		temp/=10;
	}
	if(sum==num)
	  printf("%d is an armstrong number",num);
	else
	  printf("%d is not an armstrong number",num);
	  
	return 0; 
	*/
	
	int num,digit,temp,n=0;
	float sum=0.0;
	scanf("%d",num);
	temp=num;
    for(temp=num;temp!=0;++n)
    {
    	temp/=10;
	}
	for(temp=num;temp!=0;temp/=10)
	{
		digit=temp%10;
		sum+=pow(digit,n);
	}
	if ((int)sum == num)
      printf("%d is an Armstrong number.", num);
    else
      printf("%d is not an Armstrong number.", num);
   return 0;   
	
}
