#include<iostream>
using namespace std;
int main()
{
	int arr[][4]={{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};

    for(int r=0;r<4;r++)
	{
	  
	   for(int c=0;c<4;c++)
	   {
	   	int temp;
		  while(c<2)
		  {
		  	 temp=arr[r][c];
		  	 arr[r][c]=arr[r][3-c];
		  	 arr[r][3-c]=temp;
		  }
	   }
	}
	for(int r=0;r<4;r++)
	{
		for(int c=0;c<4;c++)
		{
			cout<<arr[r][c];
			
		}
		cout<<endl;
	}
    	
}
