import java.util.Arrays;
class MaxDiff
{
	static int maxDiffer(int[]A,int N)
	{
		/*int minEle=A[0];
		int maxEle=A[0];

		for(int i=0;i<N;i++)
		{
			minEle=Math.min(minEle,A[i]);
			maxEle=Math.max(maxEle,A[i]);
		}
		return (maxEle-minEle);
		*/
		int maxele=Arrays.stream(A).max().getAsInt();
		int minele=Arrays.stream(A).min().getAsInt();
		int ans = Math.abs(maxele-minele);
		return ans;

	}
	public static void main(String[]args)
	{
		//Scanner sc = new Scanner(System.in);
		//int N= sc.nextInt();
		//int A[]=new int[N];
		//for(int i=0;i<N;i++)
		//{

			//int A[i]=sc.nextInt();
		//}
		int A[]={ -10, 4, -9, -5};
		int N=A.length;
		//MaxDiff obj= new MaxDiff();
		System.out.println(maxDiffer(A,N));
	}
}