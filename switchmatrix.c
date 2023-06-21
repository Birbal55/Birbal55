#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[3][3],r,c,ich,sumr=0,sumc=0,sum=0;


	system("cls");
	printf("Enter 9 values of matrix:\n");
   	for(r=0;r<3;r++)
	{
    	for(c=0;c<3;c++)
    	{
			printf("A[%d][%d]=",r,c);
			scanf("%d",&A[r][c]);
    	}
	}
	system("cls");
	system("pause");
	system("cls");
	
	{
		
	
		printf("\n1.Sum of all rows");
		printf("\n2.Sum of all columns");
		printf("\n3.Sum of diagonal 1");
		printf("\n4.Sum of diagonal 2");
		printf("\n5.Sum of diagonal 1 and diagonal 2");
		printf("\n6.Sum of upper triangle 1");
		printf("\n7.Sum of upper triangle 2");
		printf("\n8.Sum of lower triangle 1");
		printf("\n9.Sum of lower triangle 2");
		printf("\n10.Sum of middle row");
		printf("\n11.Sum of middle column");
		printf("\n12.Sum of middle row and column");
		printf("\nEnter your choice:");
		scanf("%d",&ich);
		switch(ich)
		{
			case 1:
				printf("\nSum of all rows:\n");
				for(r=0;r<3;r++)
				{
					sumr=0;
					for(c=0;c<3;c++)
					{
						 sumr=sumr+A[r][c];
					}
					 
					  printf("Sum of %d row =%d\n",r+1,sumr);
				}
			break;
			case 2:
				printf("\nSum of all columns:\n");
				for(r=0;r<3;r++)
				{
					sumc=0;
					for(c=0;c<3;c++)
					{
						 sumc=sumc+A[r][c];
					}
					 
					  printf("Sum of %d column =%d\n",c+1,sumc);
				}
			break;
			case 3:
			    printf("\nSum of diagonal 1");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(r==c)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of diagonal 1=%d",sum);
				
				
				}
			break;
			case 4:
				printf("\nSum of diagonal 2");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(r+c==2)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of diagonal 2=%d",sum);
				
				
				}
			break;
			case 5:	
			    printf("\nSum of diagonal 1 and diagonal 2");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(r==c || r+c==2)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of diagonal 1 and 2=%d",sum);
				
				
				}
			break;
			case 6:	
			    printf("\nSum of upper triangle 1");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(r<=c)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of upper triangle 1=%d",sum);
		    	}
		    break;
			case 7:	
			    printf("\nSum of upper triangle 2");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(r+c<=2)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of upper triangle 2=%d",sum);
		    	}
		    break;
			case 8:	
			    printf("\nSum of lower triangle 1");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(r>=c)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of lower triangle 1=%d",sum);
		    	}
		    break;
			case 9:
			    printf("\nSum of lower triangle 2");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(r+c>=2)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of lower triangle 2=%d",sum);
		    	}	
		    break;
			case 10:
			    printf("\nSum of middle rows");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(r==1)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of middle rows=%d",sum);
		    	}
			break;
			case 11:
			    printf("\nSum of middle column");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(c==1)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of middle column=%d",sum);
		    	}	
			break;
			case 12:
			    printf("\nSum of middle row and column");
				{
					for(r=0;r<3;r++)
					{
						for(c=0;c<3;c++)
						{
							if(r==1 || c==1)
							{
								printf("\nA[%d][%d]=%d",r,c,A[r][c]);
								sum+=A[r][c];
							}
				     
					       
						}
					}
					printf("\nSum of middle row and column=%d",sum);
		    	}
		    break;	
			default:
			    printf("\nInvalid input");			
            }
	
		
		
 	 }
}
   





	


