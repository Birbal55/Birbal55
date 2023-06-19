#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d",&a);
	while(a<=3)
	{
		scanf("%d",&b);
		if(b<=15)
          printf("low battery");
        else
          printf("no");
          a--;
          break;
	}
   
	return 0;
}


