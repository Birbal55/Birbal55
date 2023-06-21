#include<stdio.h>
#include<string.h>
main()
{
	//concat strcat(DesString,sourceString)
	//merge two strings
	//copy strcpy(DesString,sourceString)
	//merge two strings
//	compare
    char str1[20]="ramma";
    char str2[20]="soft";
    char str3[20]="";
    strcat(str1,str2);
	strcpy(str3,str1);
    
    char str4[20]="rammasoft";
    printf("\nstring 1 is :%s",str1);
    printf("\nstring 2 is :%s",str2);
    printf("\nstring 3 ia :%s",str3);
    printf("\nstring 4 is :%s",str4);
              //if(str1==str2)  xxxx
    //strcmp(str1,str2)
    //each character
    //a   b   c
    //a   B   C
    //97-97=0  98-66=32  99-99=0
    //Ascii code==ascii code-->0 equal
    //32(+ve/-ve)//not equal
    if(!strcmp(str1,str4))
    {
    	printf("\nstring are same");
    	
	}
	else
	{
		printf("\nstring are not same");
	}
	
}
