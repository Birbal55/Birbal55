import java.util.*;
public class HashSetEx {
    public static void main(String []args){
        //write add code to accept 100 random unique value of 2digits

       //input n number of values and remove all its duplicates
        HashSet hsr=new HashSet();
        Scanner sobjr=new Scanner(System.in);
        System.out.println("Enter n comma seperated numbers:");
        String str=sobjr.nextLine(); //length()
        String []strval=str.split(","); //length
        //for(int r=0;r<strval.length;r++)
        while(strval.length<100)
        {
            hsr.add(Math.random(strval[]));
        }
        System.out.println("hashset now:"+hsr);
        //error  System.out.println(hsr[0]);

        //Enter any string and remove all duplicate words
        //and find longest and smallest word in it
    }

}
