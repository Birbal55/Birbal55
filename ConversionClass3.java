public class ConversionClass3{


public static void main(String []args){

   /*1.coversion from wrapper to primitive type
            i.using xxxValue() mehtod  of wrapperClass
               wrapperClass.xxxValue
                            int
                            float
                            double....
            ii. Auto unboxing  java5
     */

     Integer inum=new Integer(100);
     int num1=inum.intValue();
     int num2=inum; //auto unboxing
     System.out.println(num1);
     System.out.println(num2);

}

}