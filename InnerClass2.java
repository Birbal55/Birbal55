class Outter
{

	  //outter class not allowed to access inner class members
		 void outterMethod()
		 {
			  System.out.println("OutterClass Method");

	     }
	 //member(data(instance,static),method(instance/static),block(instance/static),constructor)
	 class Inner{

   //innerclass is allowed to access outter class members
	  void innerMethod()
	  {
	      System.out.println("InnerClassMethod");
	      outterMethod();
	    }


	}//inner class over



 }//outter class over

public class InnerClassEx2{
  public static void main(String[]args)
  {
	Outter outr=new Outter();
	//outr.outterMethod();
	//outr.innerMethod();

   //OutterClassName.InnerClassName innerclassObjectref =outterClassObjectRef.new InnerClass();
  Outter.Inner inobjr=outr.new Inner();
//  inobjr.outterMethod(); //outside class no access
  inobjr.innerMethod();
  }
}