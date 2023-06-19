import java.util.*;
class DuplicateElement{
	static int arrayIn(int a[])
	{
		LinkedHashSet<Integer> sc =new LinkedHashSet<>();
		int len=a.length;
		for(int i=0;i<len;i++)
		  sc.add(a[i]);
	    System.out.print(sc);
	    //return sc;
    }
	public static void main(String[]args)
	{
		Scanner sobjr = new Scanner(System.in);
		/*int arr[] = {1,2,2,3,3,4,4,5,6,7,7};
		int len=arr.length;
		int temp[]= new int[len];
		int j=0;
		for(int i=0;i<len-1;i++)
		{
			if(arr[i]!=arr[i+1])
			{

			 temp[j++]=arr[i];

		    }
		}
		if(arr[len-2]==arr[len-1]){
		  temp[j++]=arr[len-1];

	  }
		else{
		  temp[j++]=arr[len-1];

	  }
        for(int k=0;k<len;k++)
		System.out.println(temp[k]);

	}
*/

        for(int i=0;i<len;i++)
        {
			int a[i] = sobjr.nextInt();
		}



		 System.out.println(arrayIn(a));
      }
}