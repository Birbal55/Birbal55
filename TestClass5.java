public class TestClass5{

                         //passing array ref as function argument
                         //can we pass single variable ref in java
                         //call by value   call by ref C++

static int [] returnArray(){
   int []Ar={10,20,30,40};

    return Ar;
}


public static void main(String []args){
  int []A= TestClass5.returnArray();

                        //reference
  System.out.println("After calling change array:\n");
  for(int r=0;r<A.length;r++)
  		{
			System.out.println(A[r]);
		}

}

}