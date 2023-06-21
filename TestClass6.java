//variable array argument
public class TestClass6{

                         //passing array ref as function argument
                         //can we pass single variable ref in java
                         //call by value   call by ref C++
static void testMethod(int ...A) //var-args in java
{
	for(int r=0;r<A.length;r++)
		System.out.println(A[r]);
}


public static void main(String []args){

   testMethod(10);

   testMethod(10,20,30);




   testMethod(11,22,33,44,55);

}


}