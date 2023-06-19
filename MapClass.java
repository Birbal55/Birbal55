import java.util.*;
public class MapClass{
	public static void main(String[]args){
		TreeMap hm=new TreeMap();//Dictinory dict
		//HashMap hm=new HashMap();
		//Predefined class---names,ages
		hm.put("Khan",35);
		hm.put("Rohan",23);
		hm.put("Kanti",44);
		hm.put("Babita",44);
		hm.put("abhishek",44);
		hm.put("abhi",44);
		System.out.println(""+hm);//key-value pair
		System.out.println("sonu is key"+hm.get("Kanti"));
		System.out.println("keys"+hm.keySet());
		System.out.println("values"+hm.values());
		hm.clear();
		System.out.println(""+hm);//keys-values pair
	}
}


