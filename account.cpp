#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
//int minbal;
struct Account{
  int ano;
  char name[20];
  double bal;
}a[10];
void setDetail(){
  cout<<"\n enter details of accounts\n";
  for(int r=0;r<10;r++){
  cout<<" enter account number\n";
  cin>>a[r].ano;
  cout<<" enter name\n";
  cin.ignore();
  cin.getline(a[r].name,20);
   
cout<<" enter balance\n";
cin>>a[r].bal;
}
}
void getDetail(){
  cout<<"\n enter details of accounts";
  for(int r=0;r<10;r++){
  cout<<"\n  account number for"<<r+1<<"is"<<a[r].ano;
  cout<<"\n  name"<<(a[r].name,20);
   
cout<<"\n balance"<<a[r].bal;
}}

void searchAccount(int anos){
  for(int r=0;r<10;r++){
  if(anos=a[r].ano)
      cout<<"\nyour account no is"<<a[r].ano;
  else
      cout<<"not found";
}
}
void setName(int anos){
  for(int r=0;r<10;r++){
  if(anos==a[r].ano){
    cout<<"\nenter acount name";
    char n[20];
    cin.getline(n,20);
    for(int i=0;n[i]!='\0';i++){
         a[r].name[i]=n[i];
         }
  }
}
}
char* getName(int anos){
  for(int r=0;r<10;r++){
    if(anos==a[r].ano)
       return a[r].name;
  }
}
void minBalance(int anos){
  for(int r=0;r<10;r++){
    if(anos==a[r].ano)
       cout<<"\nenter minimum Balance";
       int minbal;
       cin>>minbal;
       cout<<minbal;
  }
}
double creditBalance(int anos){
  for(int r=0;r<10;r++){
    if(anos==a[r].ano){
       cout<<"\nenter credit balance Balance";
       double crbal;
       cin>>crbal;
       a[r].bal+=crbal;
       cout<<"\nyour new balance is"<<a[r].bal;
       return crbal;
       }
  }
}
double debitBalance(int anos){
  for(int r=0;r<10;r++){
    if(anos==a[r].ano){
       cout<<"\nenter debit balance Balance";
       double dbbal;
       cin>>dbbal;
       if(a[r].bal>dbbal){
       a[r].bal-=dbbal;
       cout<<"\nyour new balance is"<<a[r].bal;
       return dbbal;
       }
  }
}
}
int main() 
{
    int ich;
do{
  system("cls");
  cout<<"\n1.press setdetails";
  cout<<"\n2.press getdetails";
  cout<<"\n3.press search account no";
  cout<<"\n4.press set name";
  cout<<"\5.press getname";
  cout<<"\n6.press set minbalance";
  cout<<"\n7.press credit balance";
  cout<<"\n8.press debit balance";
  cout<<"\n.enter your choice ";
  cin>>ich;
  switch(ich){
    case 1:
      setDetail();
    break;
    case 2:
      getDetail();
    break;
    case 3:
      int anos3;
      cout<<"\n enter account nos for search";
      cin>>anos3;
      searchAccount(anos3);
    break;
    case 4:
      int anos4;
      cout<<"\n enter account nos for set name";
      cin>>anos4;
      setName(anos4);
    break;
    case 5:
      int anos5;
      cout<<"\n enter account nos for get name details";
      cin>>anos5;
      cout<<getName(anos5);
    break;
    case 6:
      int anos6;
      cout<<"\n enter account nos for set minbalance";
      cin>>anos6;
      minBalance(anos6);
    break;
    case 7:
      int anos7;
      cout<<"\n enter account nos for credit balance";
      cin>>anos7;
      cout<<"\n credit balance"<<creditBalance(anos7);
    break;
    case 8:
      int anos8;
      cout<<"\n enter account nos for credit balance";
      cin>>anos8;
      cout<<"\ndebit balance"<<debitBalance(anos8);
    break;
    default:
      cout<<" wrong choice";
    }
    cout<<"press esc fir exit any key to continue..";
  }while(getch()!=27);
return 0;
}
