import java.util.*;
public class MapClass1{
	public static void main(String[]args){
		TreeMap hm=new TreeMap();
		hm.put(5,"Ravi");
		hm.put(3,"Sushil");
		hm.put(2,"Mohan");
		hm.put(6,"Sohan");
		hm.put(7,"mohit");
		hm.put(8,"Kapil");
		System.out.println(""+hm);
		System.out.println("3 is keys "+hm.get(3));
		System.out.println("keys "+hm.keySet());
		System.out.println("values "+hm.values());
		hm.clear();
		System.out.println(""+hm);
	}
}