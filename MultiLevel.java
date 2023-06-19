import java.util.Scanner;
class Marks{
private float subm1,subm2,subm3;

	void setMarks(float subm1,float subm2 ,float subm3)
	{
		this.subm1=subm1;
		this.subm2=subm2;
		this.subm3=subm3;
    }
    void getMarks()
    {
		System.out.println("Subject1 marks=>"+subm1);
		System.out.println("Subject2 marks=>"+subm2);
		System.out.println("Subject3 marks=>"+subm3);
	}
}

class Student extends Marks{
        private	String name;
        private	int    age;
        private 	String add;
        void setName(String name)
        {
			this.name=name;
		}
		void setAge(int age)
		{
			this.age=age;
		}
		void setAdd(String add)
		{
			this.add=add;
		}
		String getName()
		{
			return name;
		}
		String getAdd()
		{
			return add;
		}
		int getAge()
		{
			return age;
		}

}
// x=y  y=z     ????  transtive   x=z
//transtive in nature=====>???
class College extends Student{
        	int rno;
        	final static int cid=1602;

        void setRno(int rno)
        {
			this.rno=rno;
		}
		int getRno()
		{
			return rno;
		}
}


public class MultiLevel{
	public static void main(String[]args){
		College cobjr=new College();
		Scanner sobjr=new Scanner(System.in);
		//rno name age add      marks----sub1,sub2,sub3
		                           //College:setRno(),getRno()
		                           //Student:setName()/getName()/setAdd(),getAdd(),setAge(),getAge()
		                           //Marks==>transitive---> setMarks(),getMarks()
		System.out.println("Enter Student detail:");
		System.out.println("Enter Student Rno:");
		cobjr.setRno(sobjr.nextInt());
		System.out.println("Enter Student Name:");
		sobjr.nextLine();
		cobjr.setName(sobjr.nextLine());
		System.out.println("Enter Student Add:");
		cobjr.setAdd(sobjr.nextLine());
		System.out.println("Enter Student age:");
		cobjr.setAge(sobjr.nextInt());
		System.out.println("Enter Student Three Subject Marks:");
		cobjr.setMarks(sobjr.nextFloat(),sobjr.nextFloat(),sobjr.nextFloat());
        System.out.println("\nStudent detail are:");
	    System.out.println("Rno="+cobjr.getRno());
	    System.out.println("Name="+cobjr.getName());
	    System.out.println("Address="+cobjr.getAdd());
	    System.out.println("Age="+cobjr.getAge());
        cobjr.getMarks();


	}
}