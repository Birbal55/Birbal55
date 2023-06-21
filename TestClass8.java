class SuperClass{

	SuperClass()
	{
		System.out.println("SuperClass parameterless Constructor");
	}
	SuperClass(int x)
	{
		System.out.println("SuperClass parameterized version of constructor");
	}
}
class SubClass extends SuperClass
{

	SubClass()
	{
		//When object its created SubClass constructor get called automatically
		//subclass constructor call implicitly SuperClass() parameterless version
		//Compiler embbed SuperClass() parameterless cosntrutor call automatically
		//within SubClass constructor

		//SuperClass()----Compiler
		System.out.println("SubClass parameterless Constructor");
	}

	SubClass(int x)
	{
		//by default compiler embbed here
		//SuperClass()
		 System.out.println("SubClass permeterized version of constructor");
	 }
}



public class TestClass8{


	public static void main(String[]args){
      SubClass subr1=new SubClass(); //SubClass() constructor getCalled
      System.out.println("Object2 Creation");
      SubClass subr2=new SubClass(100);


	}

}