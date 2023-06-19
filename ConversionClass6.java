/*


              valueconsversion
                   C/C++


                   1.Implicit Conversion====>java==>widening
                        //samller type(primitive type) into larger type
                        automatically //larger type
                        double dno=11;
                                   //int-----float

                    2.Explicit Conversion ====>java==>Narrowing/TypeCasting
                      Larger type into smaller type ----bitloss
                      Compiler cant convert automatically
                      but programmer force to convert
                      //C                               C++
                      int num=(int)11.11              int num=int(11.11)
                             //(datatype) value            = Datatype(value)
                                         java

                                        int num=(int)

                      int ino=11.11;
                                //c/C++
                                 ino=11
                                //in java error compilation



                                   //**superClass subClass
                                   //SuperClass objr=new SubClass();
                                   //SubClass objr=new SuperClass();

*/
public class ConversionClass6{


public static void main(String []args){

   int num=(int)11.11;  //(?)
  // float fno=float(11.11);
   float fno1=(float)11.11;
 float fno2=(float)(11.11);
  double dno=11; //11---->(?)
  System.out.println(num);
  System.out.println(fno1);
  System.out.println(fno2);
  System.out.println(dno);

}

}