abstract class absClass{
	abstract void absMethod();
}


class Outter
{
	//instance members(Object level)
	  //variable,method,block,clsses(local inner,method inner,nameless class),interfaces
	  //need create object to build memory or implement
	  
	  class Inner  //1.
	  {
	    void innerMethod()
	    {
			
		}
	  }
	  
	  void outterMethod()
	  {
		   class MethodInner{//2.
			
			  void mmInner()
			  {
				  
			  }
		   }
		   //object
	   }
	  
	  AbsClass aobjr=new AbsClass(){//3.
		  void absMethod()
		  {
		  }
		  void testMethod()
		  {
		  }
	  };
	  
	  
	//static members(class level)
	 //variable ,method,block,class
	 
	 static StInnerClass{
		 
		 void stInnerMethod()
		 {
			 
		 }
	 }
}


public class AbsClass{
	public static void main(String []args){
		
		//all innerclass Object create  ----> 
		//access aool methods
		
		
	}
}