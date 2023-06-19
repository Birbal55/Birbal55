import java.util.Scanner;
 public class ConVol   {
	 public static void main(String[]args){
		 Scanner sobjr=new Scanner (System.in);
		 System.out.println("Enter radius and height of cone:");
		 double drad=sobjr.nextDouble();
		 double dh=sobjr.nextDouble();
		 System.out.println("Volume of cone="+1.047975*drad*drad*dh);


}
}