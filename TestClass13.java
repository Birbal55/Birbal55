interface MyInterface
{

  class InnerClass
  { //Member data---->public static final

	  void testMethod1() //no rules applied here
	  {
		  System.out.println("InnerClass Method");
	  }
  }
                //member method--->public abstract
     			void interMethod();
}


public class TestClass13
{
	public static void main(String []args)
	{
    MyInterface.InnerClass inobjr=new MyInterface.InnerClass();
    inobjr.testMethod1();
	}
}