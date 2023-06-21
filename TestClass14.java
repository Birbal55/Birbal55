/*class SuperClass{

}
class SubClass extends SuperClass{

}

subClass  objr= new SubClass()
SuperClass objr=new SubClass();
SuperClass objr=new SuperClass();
SubClass objr= new SuperClass();
*/
import java.util.Scanner;
public class TestClass14{

	public static void main(String[]args)throws ArithM{

      try
      {
		  System.out.println("Within Try block");
		  throw new ArithmeticException();
	  }
	  catch(ArithmeticException e)
	  {
		  System.out.println("with in CatchBlock");
		  System.out.println("Arithmetic Exception  cant divide by zero");

	  }

	  System.out.print("Rest program work no abnormal termination");

	  //1.excetioon
	            //its a runtime error ,cause of abnormal termination of program
	  //2. abnormal and normal termination of program
	        //termination of program in middle without reaching the end its known as abnormal termination and compeletly execution
	        //of program or without terminating in middle reach end of program its known as normal termination
	  //3. what is exception handling
	          //to tell the user or aware the user where is error in your program or prevent the abnormal termination of program
	  //4. what is used to handling exception in java
	      //there are five method in java provided by java to handling exception







 }
}