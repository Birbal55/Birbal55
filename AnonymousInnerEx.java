/* nameless or Anonymous class
   Anonymous inner class of nameless innerclasses ,these are used to provide implemenation for
   abtract class and interfaces

   //home work--- Interface implement---karna hai
   steps
        1. Create and abstract class or interface
        {
		}
	    2. create OuuterClass{

			{

				 //create AnonymousInnerClass hered
				 NameAbsClass refvar=new NameAbs()

				 {

				 }; //;  semicolon is must

			}
			*/

abstract class AbsClass{

   abstract void absMethod();
   void  insMethod()
   {
	   System.out.print("abstract normal method");
   }
}

class OutterClass{
	void outterMethod()
	{
		System.out.println("OutterClass method");
	}

	//Anonymous innerClass or nameless InnerClass
	AbsClass aobjr=new AbsClass(){
	    //insMethod()
	    void absMethod(){
			System.out.println("Abstract class method implementation");
		}

		void AnMethod() //xxx
		{
			System.out.println("Anonymousinner class method");
		}
	};

}

public class AnonymousInnerEx{
	public static void main(String[]args){
	OutterClass outr=new OutterClass();
	outr.outterMethod();
	outr.aobjr.insMethod();
	outr.aobjr.absMethod();
	//outr.abojr.AnMethod();

	}

}