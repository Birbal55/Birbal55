main()
{
	int r;
	for(r=1;r<=5;r++)
	{
		//1
		printf("Hurrey!");
		if(r==1)
		  continue;
		printf("\nwoooooo!");
		if(r==2)
		  continue;
		printf("\nZoooooooba!");
		if(r==3)
		  continue;
		printf("\nBooooom!");
		if(r==4)
		  break;
		printf("\nYahooooo!\n");        
	}
}