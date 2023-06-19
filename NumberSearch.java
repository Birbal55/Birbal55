import java.util.*;
public class NumberSearch
{
  int isOperation(String str){
    int sum=0,wusum=0,wlsum=0;
    for(int r=0;r<str.length();r++){
      if(str.charAt(r)>='A' && str.charAt(r)<='Z')
           wusum++;
      if(str.charAt(r)>='a' && str.charAt(r)<='z')
            wlsum++;
      if(str.charAt(r)>='0' && str.charAt(r)<='9')
           sum+=Character.getNumericValue(str.charAt(r));
    }
    return sum/(wusum+wlsum);


  }




public static void main(String argvs[])
{
  NumberSearch obj=new NumberSearch();
  Scanner sobjr=new Scanner(System.in);
  String str=sobjr.nextLine();
  System.out.println(obj.isOperation(str));



}
}