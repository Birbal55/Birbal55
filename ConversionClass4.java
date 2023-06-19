public class ConversionClass4{


public static void main(String []args){

   /*1.
      conversion of object type in string type
       i. using + concat
       ii. toString()
     2.conversion of stringtype to object type

     */

     Integer inum=new Integer(100);
     String val1=""+inum;
     String val2=inum.toString();

     System.out.println(val1);
     System.out.println(val2);
     String sval="500";
     Integer inum1=new Integer(sval);
     Integer inum2=Integer.valueOf(sval);
  //autoboxing not applied   Integer inum3=sval;
  System.out.println(inum1);
  System.out.println(inum2);



}

}