public class TestClass4{

                         //passing array ref as function argument
                         //can we pass single variable ref in java
                         //call by value   call by ref C++

static void changeArray(int []A){

	for(int r=0;r<A.length;r++)
		{
			System.out.println(A[r]);
	        A[r]+=10;
	   }

}


public static void main(String []args){
   int []Ar={10,20,30,40};
  TestClass4.changeArray(Ar);
                        //reference
  System.out.println("After calling change array:\n");
  for(int r=0;r<Ar.length;r++)
  		{
			System.out.println(Ar[r]);
		}

}


}