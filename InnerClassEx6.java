class OuterClass
{
	int ino1,ino2;
    void setOutter(int ino1,int ino2,int ino3,int ino4) //if define innerclass inside outter class method its knows as methodInner class
    {                 //method inner class

           this.ino1=ino1;
           this.ino2=ino2;
           class InnerClass{
		   					 int ino3,ino4;

							            void setInner(int ino3,int ino4)
							            {
							 			   this.ino3=ino3;
							 			   this.ino4=ino4;
							 		   }
							 		   void getInner()
							 		   {
							 			    System.out.println("ino3="+ino3);
							 			    System.out.println("ino4="+ino4);

			  							}
					}

			  InnerClass inobjr=new InnerClass();
			  inobjr.setInner(ino3,ino4);
              inobjr.getInner();

	 }
	 void getOutter()
	 {
                       		 System.out.println("ino1="+ino1);
							 System.out.println("ino2="+ino2);

	 }



 }//outter class over

public class InnerClassEx6{
  public static void main(String[]args)
  {
	  int ino5,ino6;
      OuterClass outr=new OuterClass();
      outr.setOutter(100,200,300,400);
      outr.getOutter();
  }
}