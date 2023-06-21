#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int ino,r;
	for(ino=1;ino<=100;ino++)
	{
		r=2;
		while(r<=(int)sqrt(ino))
		{
			if(ino%r==0)
			   break;
			r++;
			   
		}
		if(r==(int)sqrt(ino)+1)
		   printf("\n%d",ino);
		
	}
}
