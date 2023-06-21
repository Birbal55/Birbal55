#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	while(1)
	{
	
		double dbase,dpow;
		int ich;
		system("cls");
		//menu
		cout<<"\n1.Press for square:";
		cout<<"\n2.Press for cube:";
		cout<<"\n3.Press for x power y:";
		cout<<"\nEnter your choice:";
		cin>>ich;
		system("cls");
		switch(ich) //selection
		{
		    case 1:
		    	//square programm
		    	cout<<"Enter any value:";
		    	cin>>dbase;
		    	cout<<"\nSquare="<<dbase*dbase;
		    break;
			case 2:
				//cube programm
			    cout<<"Enter any value:";
				cin>>dbase;
				cout<<"\nCube="<<dbase*dbase*dbase;
			break;
			case 3:
				//x power y
			    cout<<"Enter value of base and power:";
				cin>>dbase>>dpow;
				cout<<"\nAnswer="<<pow(dbase,dpow);
			break;
			default: //else
			    cout<<"invalid choice:";
							
		} //switch block over here
		cout<<endl;
		system("pause");
    }
}//main block over here
