#include<iostream>
using namespace std;
int main()
{
	int ino,r;
	for(ino=1;ino<=100;ino++)
	{
		r=2;
		while(r<=ino/2)
		{
			if(ino%r==0)
			   break;
			r++;   
			
		}
		if(r==(ino/2)+1)
		   printf("\n%d",ino);
	}
}
