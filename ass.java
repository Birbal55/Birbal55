class Tester {
	public static void main(String[] args) {
		// Implement your code here 
		char fdtype='N';
		int qtyord=2,dist=3;
		if((fdtype=='N' || fdtype=='V') && qtyord>=1 && dist>0)
		{
		    if(fdtype=='V')
		    {
              if(dist<=3)
                System.out.println("bill="+qtyord*12);
              else if(dist>3 && dist<=6)
                System.out.println("bill="+((qtyord*12)+(dist-3)));
              else
                System.out.println("bill="+((qtyord*12)+(dist-3)*1+1));
		    }    
            else
            {
              if(dist<=3)
                System.out.println("bill="+qtyord*15);
              else if(dist>3 && dist<=6)
                System.out.println("bill="+qtyord*15+((dist-3)*1));
              else
                System.out.println("bill="+qtyord*15+((dist-6)*2));
		    }   
		}
        else
          System.out.println("bill="+(-1));
		}
		
	
	}
