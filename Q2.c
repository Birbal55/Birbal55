#include<stdio.h>
int main()
{
	char ch ='c';
	printf("%d %d %c",sizeof(char),sizeof(ch),sizeof('c'));
	return 0;
}

//c Language  -> sizeof('c') ->sizeof(99) -> sizeof(int) ->2/4

//1 1 2/4

//CPP Language -> sizeof('c') -> sizeof(char) -> 1 

//1 1 1
