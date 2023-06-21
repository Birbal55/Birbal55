import java.util.*;
public class StackExample{
	public static void main(String []args){
		//create arraylist of names and remove all search names
		ArrayList ar =new ArrayList();
		ar.add("Atul");
		ar.add("Robin");
		ar.add("Sushil");
	    ar.add("Atul");
		ar.add("Kanti");
		ar.add("Sushil");
		System.out.println(ar);
		String val="Sushil";
		Iterator itr=ar.iterator();
		while(itr.hasNext())
		{
			String str=(String)itr.next();
			if(str.equals(val))
			    itr.remove();
	    }
	    System.out.println(ar);











}
}
