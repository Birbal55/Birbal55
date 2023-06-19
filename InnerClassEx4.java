class Outter
{

		 void outterMethod()
		 {
			  System.out.println("OutterClass Method");

	     }

	    protected  class Inner{

				void innerMethod()
			{
				  System.out.println("InnerClassMethod");
				  outterMethod();
				}


	}//inner class over



 }//outter class over

public class InnerClassEx4{
  public static void main(String[]args)
  {


   //OutterClassName.InnerClassName innerclassObjectref =outterClassObjectRef.new InnerClass();
  Outter.Inner inobjr=new Outter().new Inner();
  inobjr.innerMethod();
  }
}