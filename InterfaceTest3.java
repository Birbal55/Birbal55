class First{
}
class Second{

}
interface MyInter1{

	void testMethod1();
}

interface MyInter2 {
	void testMethod2();
}
interface Myinter3 implements First,Second{

}
//can we extends more then one interfaces no
//can we extends more then one classes  no
//can we implements more than one interfaces  yes
//can we implements more than one classes no
//can we extends interface by another interface yes
//can we extends multiple interface into another interface yes
//can we extends multiple class into another interface //no
//can we implements multiple class into another interface //no

class SubClass implements MyInter2{
	public void testMethod1(){

		System.out.println("implementation of Myinter1 method");
	}
	public void testMethod2(){

			System.out.println("implementation of Myinter2 method");
		}

}
public class InterfaceTest3{

     public static void main(String[]args){
    // MyInter1 iobjr=new MyInter1();

     SubClass objr=new SubClass();
     objr.testMethod1();
     objr.testMethod2();
}
}