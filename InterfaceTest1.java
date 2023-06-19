interface  MyInter1{
   int num=0;
   void testMethod(int x);
}

class SubClass implements MyInter1{

	public void testMethod(int x)
	{
		System.out.println("Implementation of testMethod");
	}
}


public class InterfaceTest1{

     public static void main(String[]args){
    // MyInter1 iobjr=new MyInter1();

     SubClass objr=new SubClass();
     objr.testMethod(100);
}
}