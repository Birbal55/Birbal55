public class ConversionClass1{


public static void main(String []args){

   /*1.coversion from primitive type to object Type
            i.using constructor of wrapperclasses
            ii.using valueOf() method
            iii.autoboxing  java5
     */
     int num=10;
     Integer inum1=new Integer(num);
     Integer inum2=Integer.valueOf(num);

     System.out.println(inum1);
     System.out.println(inum2);
     Integer inum3=num;//auto boxing
     System.out.println(inum3);

}

}