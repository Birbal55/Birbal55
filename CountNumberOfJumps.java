import java.util.*;
import java.io.*;
class CountNumberOfJumps
{
   static int canReach(int[] A, int N)
   {

       return canReach(A,N,0);
   }

   static int canReach(int[] A, int N, int start)
   {

       if(start >= N - 1)
       {
           return 1;
       }
       while(A[start] > 0)
       {
          if(canReach(A,N,start + A[start]) == 1)
          {
              return 1;
          }
          A[start]--;
       }
       return 0;
   }
   public static void main(String[] args) throws IOException
   {
	   BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
	   int t = Integer.parseInt(bfr.readLine());
	   while(t-->0)
	   {
		   int N = Integer.parseInt(bfr.readLine());
		   String []s1=bfr.readLine().split(" ");
		   int []A=new int[N];
		   for(int i=0;i<N;i++)
		   {
			   A[i]=Integer.parseInt(s1[i]);
		   }
		    CountNumberOfJumps obj = new CountNumberOfJumps();
	   		System.out.println(canReach(A,N));
	   }



    }
}