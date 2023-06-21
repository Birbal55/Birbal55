main()
{
	//special case of switch
//	string length "one"...."one\0"....>size=4
//   printf("one")//its answer different ...one==total printed character=3
    //switch("one")//error(string are not allowed in switch(integer(int/char))
    switch(4)
    {
    	//if code is not within case of default its not part of switch and not work
    	printf("I can't print do you understand");
    	default:
    		printf("\nwrong choice");
    		//fall down
    	case 1:
		    printf("\nOne");
			//fall down
		case 2:
		    printf("\nTwo");
			//fall down
		case 3:
		    printf("\nThree");			
	}
}
