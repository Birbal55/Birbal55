class OuterClass
{
	void outterMethod()
	{
		System.out.println("outter class method");
	}
    static class StaticInnerClass{
		//int ino;
		//only allowed to access static member of class

		void innerMethod()
		{
			System.out.println("InnerClass Method");
		    outterMethod();
		}

	}



 }//outter class over

public class InnerClassEx7{
  public static void main(String[]args)
    {
  	  OuterClass.StaticInnerClass inobjr=new  OuterClass.StaticInnerClass();
         //errorStaticInnerClass inobjr=new StaticInnerClass();
         inobjr.innerMethod();

  }
}