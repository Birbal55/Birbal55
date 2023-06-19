main()
{
	//special case of switch: switch without break ===fall through
	switch(1)
	{
		case 1:
			printf("\nOne");
			  //fall down
		case 2:
		    printf("\nTwo");
		case 3:
		    printf("\nThree");
		default:
		    printf("\nwrong choice");			  
	}
}
