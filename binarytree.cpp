#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int level;
	cout<<"Enter Tree level:";
	cin>>level;
	int size=int(pow(2,level)-1);
	char *tree=new char[size];
	cout<<"size is:"<<size<<endl;
	cout<<"\nEnter Node values level wise:";
	for(int r=0;r<size;r++)
	{
		cin>>tree[r];
	}
	
	cout<<"\nTree is:"<<endl;
	int c1=0;
	for(int r=0;r<level;r++)
	{
		//level0 =1=2pow0  level1 =2pow1   level2=2pow2....
		for(int c=0;c<int(pow(2,r));c++)
		{
			cout<<tree[c1++]<<"\t";
		}
		cout<<endl;
	}
}
