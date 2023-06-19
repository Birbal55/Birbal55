interface  MyInter1{
   int num=0;
   void testMethod();
}

class SubClass implements MyInter1{

	public void testMethod()
	{
		System.out.println("Implementation of testMethod");
	}
}


public class InterfaceTest{

     public static void main(String[]args){


     SubClass objr=new SubClass();
     objr.testMethod();
}
}