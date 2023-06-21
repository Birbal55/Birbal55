import java.util.*;
public class TreeSetClass{
	public static void main(String[]args){
		TreeSet ts=new TreeSet();//TreeSet ==SortedSet
		//**if follow sorting order
		//**it is must be collection of no null value is allowed same type of objects
		ts.add("Rohan");
		ts.add("Abhi");
		ts.add("Boss");
		ts.add("Kavi");
		ts.add("Kavi");
		ts.add("Ajay");
		//ts.add(null);
		System.out.println(""+ts);
		//System.out.println(""+ts.tailSet("Abhi"));
		//it will return sorted set object with all elements greater than or equals to the specified element

		//System.out.println(""+ts.headSet("Kavi"));
		//it will return sorted set object with all elements are less than or equal to the specified elements
		//System.out.println(""+ts.subset("Boss","Rohan"));
		//it will return sorted set object with all elements are less than or equal to the specified elements
		System.out.println("First element ->"+ts.first());
		System.out.println("Last element ->"+ts.last());
	}
}
