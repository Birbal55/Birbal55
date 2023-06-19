import java.util.*;
public class HashClass{
	public static void main(String[]args){
		HashSet sr=new HashSet();
		sr.add(100);
		sr.add(200);
		sr.add(20);
		sr.add(30);

		LinkedHashSet sr1=new LinkedHashSet();
		sr1.add(100);
		sr1.add(200);
		sr1.add(20);
		sr1.add(30);

		System.out.println("HashSet"+sr);
		System.out.println("LinkedHashSet"+sr1);
	//	Iterator itr1=str1.iterator();
}
}