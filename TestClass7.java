class SuperClass{

	SuperClass()
	{
		System.out.println("SuperClass parameterless Constructor");
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
		System.out.println("SubClass parameterless Consttructor");
	}
}



public class TestClass7{


	public static void main(String[]args){
      SubClass subr=new SubClass(); //SubClass() constructor getCalled

	}

}