#include<iostream>
using namespace std;
int main()
{
	int ino,r;
	int count;
	for
	(ino=1;ino<=100;ino++)
	{
		r=1;
		count=0;
		while(r<=ino)
		{
			if(ino%r==0)
			   count++;
			r++;
			   
		}
		if(count==2)
		printf("\n%d",ino);
		
	}
}
