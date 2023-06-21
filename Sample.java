class Sample{
	private int ino1,ino2;
	//Sample()=====>cant supply default version of constructor ,your defined found
	//
	//user defined
	//parameterless
	Sample(){
		System.out.println("Parameterless constructor called");
		ino1=0;
		ino2=0;
	}
	//parameterized
	Sample(int ino1,int ino2)
	{
		this.ino1=ino1;
		this.ino2=ino2;
		System.out.println("parameterized constructor called");
	}
}
public class ConCheck{

	public static void main(String args[]){
	  Sample smobjr1=new Sample();
	  Sample smobjr2=new Sample(100,200);
	}

}