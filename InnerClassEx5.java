class Outter
{
    void outter()
    {
		 System.out.println("outterMethod");
	 }
		 class SuperInnerClass{
			 void superMethod()
			 {
				 System.out.println("SuperInnerMethod called");
			     outter();
			 }
		 }

		 class SubInnerClass extends SuperInnerClass{
			 void subMethod()
			 			 {
			 				 System.out.println("SubInnerMethod called");
			 				 outter();
			 				}
		 }




 }//outter class over

public class InnerClassEx5{
  public static void main(String[]args)
  {
       Outter.SubInnerClass subobjr=new Outter().new SubInnerClass();

       subobjr.superMethod();
       subobjr.subMethod();

  }
}