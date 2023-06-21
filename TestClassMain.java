public class TestClass{

int insvar1,insvar2;//??? how many times created
static int stvar; //??? how many times created

}

public class TestClassMain{

public static void main(String[] args){
   int ino; //how many times created
   TestClass obj1=new TestClass();
   TestClass obj2=new TestClass();

   System.out.println("invar="+obj.insvar);
   System.out.println("stvar="+stvar);

   //must be initialize local variable before use
   ino=100;
   System.out.println("ino="+ino);

}
}