main()
{
	int r;
	for(r=1;r<=5;r++)
	{
		if(r*2==6)
		  break;
		if(r+3==5)
		  continue;
		printf("\n%d",r);    
	}
}
