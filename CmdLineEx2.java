public class CmdLineEx2{

	public static void main(String ...nums){

	      int ino=Integer.parseInt(nums[0]);
	      int f=1;
	      if (ino>=0){

	      		while(ino>=2)
	      		{
					 f*=ino;
					 ino--;
				 }
				 System.out.println("Factorial="+f);
	  	}
	  	else
	  		System.out.println("+ve value only (invalid input");

	}

}