#include<stdio.h>
//1.prototyping of function
void smile(void);
//returntype Nameof function(arguments/parameters);
main()  //main entry point of programm
{
	smile();  //3.calling(**)any function must be call directly or indirectly with main function
	
}
//2.definition of function
void smile(void)
{
	int r;
	for(r=0;r<5000;r++)
	{
		printf("%c",2);
	}
}

