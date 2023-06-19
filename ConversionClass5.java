public class ConversionClass5{


public static void main(String []args){

   /*
       String to primitive type
        WrapperClass.parseXXX()
                           Int()
                           Float()
                           Double()
     primitive to string type
              +
              WrapperClass.toString
     */
     String str="100";
     int num1=Integer.parseInt(str);
     float num3=Float.parseFloat(str);
     double num4=Double.parseDouble(str);
     System.out.println(num1);
     System.out.println(num3);
     System.out.println(num4);
     System.out.println(num1+123);
     int num2=200;
     String sval1=""+num2;
     String sval2=Integer.toString(num2);
     String sval3=""+num3;
     String sval4=Double.toString(num3);
     String sval5=""+num4;
     String sval6=Double.toString(num4);
     System.out.println(sval1);
     System.out.println(sval2);
     System.out.println(sval3);
     System.out.println(sval4);
     System.out.println(sval5);
     System.out.println(sval6);
}

}