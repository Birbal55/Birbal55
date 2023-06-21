//programm to check input character is vowel or consonant
#include<stdio.h>
#include<stdlib.h>
main()
{
	char ch;
	system("cls");
	printf("Enter an alphabet:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	  printf("%c is a vowel\n",ch);
	else
	  printf("%c is a consonant\n",ch);
	system("pause");    
}
