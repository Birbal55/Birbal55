import java.util.*;
public class ArrayList1{
	public static void main(String[]args){
		ArrayList ar=new ArrayList();
		ar.add("Kavita");
		ar.add("Savita");
		ar.add("Kavita");
		ar.add("Kanti");
		ar.add("Kanti");
		ar.add("Sohan");

		HashSet hsr=new HashSet(ar);
		System.out.println(hsr);
		char[]carr={'a','b','c','d','d','e','e','f'};
		hsr.clear();
		for(char val:carr)
		   hsr.add(val);
		System.out.println(hsr);
		Scanner sobjr=new Scanner(System.in);
		String str=sobjr.nextLine();//10,11,12,13,15,17,18,10,12,15
		String[]strval=str.split("");
		hsr.clear();
		for(String strv:strval)
		  hsr.add(strv);
		System.out.println(hsr);
		//System.out.println(hsr[0]);
	}
}