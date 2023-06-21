main()
{
	char cv;
	printf("Enter any character:");
	scanf("%c",&cv);
	if((cv>='a' && cv<='z')||(cv>='A'&&cv<='Z'))
	{
		switch(cv)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			       printf("Its vowel");
			break;
			default:
			       printf("\nIts consonant");	   	
		}
	}
	else
	  printf("Its not an alphabet");
}
