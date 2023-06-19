import java.util.Scanner;
class Sample
{
	Sample()
	{
		 System.out.println("Constructor called"+this);
	 }
	protected void finalize()
	 {
		  System.out.println("finalized method called"+this);
	  }

 }

public class GCExample{

	public static void main(String []args){

          {
     			   Sample objr=new Sample();
     			   objr=null;
     			   //System.gc();
     			   Runtime.getRuntime().gc();
	      }//scope over----> finalize()----garbage collector(object destroy)

          Scanner sobjr=new Scanner(System.in);
          sobjr.nextLine();
	}
}

/*
     GC  table
           objref              Object hashcode

           objr                 null
*/