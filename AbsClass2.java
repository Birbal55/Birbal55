abstract class absClass{
	abstract void absMethod();
}


class Outter
{
	//instance members(Object level)
	  //variable,method,block,classes(local inner,method inner,nameless class),interfaces
	  //need create object to build memory or implement

	  class Inner  //1.
	  {
	  }

	  void outterMethod()
	  {
		   class MethodInner
		   {//2.

	       }

	  }

	  AbsClass aobjr=new AbsClass()
	  {//3.
		  void absMethod()
		  {
		  }
	  };


	//static members(class level)
	 //variable ,method,block,class

	 static StInnerClass
	 {


	 }
}


public class AbsClass2{
	public static void main(String []args){


	}
}