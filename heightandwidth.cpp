#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    int height,width;
    cout<<"enter your height: ";
    cin>>height;
    cout<<"enter your width : ";
    cin>>width;
    int sps=width*5;
    int r=1;
    int m=1;
    for(r=1;r<=height;r++)
    {
        for(i=m;i<=width;i++)
        {
           for(j=sps;j>=i;j--)
           {
               cout<<" ";
           }
           for(k=1;k<=i;k++)
           {
               cout<<"* ";
           }
           cout<<endl;
        }
        m+=2;
        width+=2;
    }
    for(i=1;i<=4;i++)
    {
        for(j=sps-3;j>=1;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=4;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
