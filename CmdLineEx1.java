public class CmdLineEx1{

	public static void main(String ...nums){

	     float sum=0.0f;
	     for(int r=0;r<nums.length;r++)
	     	sum+=Float.parseFloat(nums[r]);

	     System.out.println("sum of values is:"+sum);

	}

}