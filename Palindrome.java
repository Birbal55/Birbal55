import java.util.*;
public class Palindrome
{
  String isPalindrone(String str){
    boolean f= false;
    char[] ch=str.toCharArray();
    for(int r=0;r<ch.length/2;r++){
      if(ch[r]==ch[ch.length-1-r]){
        f=true;
      }
      else
        f=false;
    }
  //  StringBuffer bfr= new StringBuffer(ch);
    //str=null;
  // String st1r=ch.toString();
    if(f==true)
      return str;
    else
       return " not";

  }




public static void main(String argvs[])
{
  StartsWithEx obj=new StartsWithEx();
  Scanner sobjr=new Scanner(System.in);
  String str=sobjr.nextLine();
  System.out.println(obj.isPalindrone(str));



}
}