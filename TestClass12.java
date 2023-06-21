class Outter
{
  //inner abstract class inside the class
  abstract class AbsClass
  {

	  abstract void testMethod1();
  }
  class Class1 extends AbsClass
  {

	  void testMethod1()
	  {
		  System.out.println("Implemenation of abstract class method");
	  }

  }
  //inner interface inside the class
  interface MyInter1
  {
	  void testMethod2();
  }

  class Class2 implements MyInter1{

  	  public void testMethod2()
  	  {
  		  System.out.println("Implemenation of interface method");
  	  }

  }

}


public class TestClass12{
	public static void main(String []args){

	Outter.Class1 c1objr1=new Outter().new Class1();
	//xxxOutter.AbsClass c1objr=new Outter().new AbsClass();
	Outter.AbsClass c1objr2=new Outter().new Class1();

		                  //object
		                  //outter
	Outter.Class2 c2objr1=new Outter().new Class2();
	//Outter.Myinter2 c2objr=new Outter().new Myinter();
	Outter.MyInter1 c2objr2=new Outter().new Class2();

   c1objr1.testMethod1();
   c1objr2.testMethod1();
   c2objr1.testMethod2();
   c2objr2.testMethod2();

	}
}