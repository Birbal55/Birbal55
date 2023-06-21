class SuperClass{
   //constructor cant be private
	private SuperClass()
	{
		System.out.println("Superclass Cosntructor");
	}

}


public class TestC{

	public static void main(String[]args){
       SuperClass objr=new SuperClass();

 	}


}