import java.util.*;
public class LinkedList{
	public static void main(String[]args){
		LinkedList lsr=new LinkedList();
		lsr.add(100);
		lsr.add(200);
		lsr.add(300);
		lsr.add(1,150);
		System.out.println(lsr);
		LinkedList lsr1=new LinkedList();
		lsr1.add(lsr);
		LinkedList lsr2=new LinkedList();
		lsr2.add(111);
		lsr2.add(222);
		lsr2.add(333);
		lsr2.add(2,lsr);
		System.out.println("LinkedList1 is:"+lsr);
		System.out.println("LinkedList2 is:"+lsr1);
		System.out.println("LinkedList3 is:"+lsr2);
		ListIterator Itr=lsr.ListIterator();
		while(Itr.hasNext())
		{
			System.out.println(Itr.next());
		}
		while(Itr.hasPrevious())
		{
			System.out.println(Itr.previous());
		}
	}
}

