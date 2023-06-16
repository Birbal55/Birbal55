public class A1
{
	public static void main(String[]args)
	{
        char t='\0';
		//for(char c='a';c<='z';c++)
		char c='a';
		while( c<='z')
		{

			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
			{
				t=c;

			  System.out.println(c);

		    }
			else
			{
			  System.out.println(t+""+c);

		    }
		    c++;
		  }
	  }
  }
