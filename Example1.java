public class Example1{
	public static void main(String[]args){

		//String vs StringBuffer
		//duplicate length value
	//String names="abcd,abc,abcde,abcdef,abcdefg";
	String names="Sumit,Rohan,Mohan,Kavi,Abhi,Kavita,av,amanlal";
	//array of string
	String [] Anames=names.split(",");
	//.length()
	//["Sumit","Rohan","mohan","kavi","abhi","kavita"]
	//     0      1       2       3      4       5
	//.length
	int max,min;
	String minlenString="";
	String maxlenString="";
	min=max=Anames[0].length();//string
	//Array
	for(int r=0;r<Anames.length;r++)
	{
		if(min>Anames[r].length())
		{
			min=Anames[r].length();
			minlenString=Anames[r];
		}
		if(max<Anames[r].length())
		{
			max=Anames[r].length();
			maxlenString=Anames[r];
		}


		}
		System.out.println("minimum length string="+minlenString);
		System.out.println("maximum length string="+maxlenString);

	}
}