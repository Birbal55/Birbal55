public class ReverseClass{
	static int m=4;
	static int n=4;
	static void reverseArray(boolean Arr[][]){
		for(int i=0;i<m;i++)
		{
			int start=0,end=n-1;
			while(start<end)
			{
				boolean temp=Arr[i][start];
				Arr[i][start]=Arr[i][end];
				Arr[i][end]=temp;
				start++;
				end--;
			}
		}
		for(boolean i:Arr)
		     System.out.println(i);
	}
}
	public static void main(String []args){
		boolean Array[][]={{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
		reverseArray( Array);

}

}
