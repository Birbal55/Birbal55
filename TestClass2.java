class Sample{

	int ino1,ino2;
	final static int stvar=10; //it must initialized

   // final: value cant change
   // static: memory cant create new
	void show()
	{
		System.out.println("ino1="+ino1);
		System.out.println("ino2="+ino2);
		System.out.println("stvar="+stvar);
	}

}
 /*class level
       ----------

       ----------
         ino
         */

public class TestClass2{
	public static void main(String[]args){
    Sample objr1=new Sample();
                                  /*  objr1----- ino1,ino2;*/

	Sample objr2=new Sample();
	                             /* objr1------ino1,ino2 */

	objr1.show();
	objr2.show();
    objr1.ino1=100;
    objr1.ino2=200;
    //Sample.stvar=111;
	}
}