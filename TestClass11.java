class SuperClass{

	SuperClass()
	{
		System.out.println("SuperClass parameterless Constructor");
	}

	SuperClass(int x)
	{
		this(); //===superclass---->parameterless
		System.out.println("SuperClass parameterized version of constructor");
	}
}
class SubClass extends SuperClass
{

	SubClass() //1.
	{
        this(100); //====>sublcass(parameterized
		System.out.println("SubClass parameterless Consttructor");
	    //this(100); //error call to to this must be first statement in constructor
	}

	SubClass(int x)
	{
		 super(x);//====> superclass(parameterized)
		 System.out.println("SubClass parameterized version of constructor");
	     //super(x); //call to super must be first statment in constructor
	 }
}



public class TestClass11{


	public static void main(String[]args){
      SubClass subr1=new SubClass(100);  //Parameterless

	}

}