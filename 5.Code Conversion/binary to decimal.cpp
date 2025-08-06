#include<iostream>
using namespace std;
int main()

{
  int num;
  cout<<"enter the nym :";
  cin>>num;
  
  int rem,ans=0,mul=1;

  while(num>0)
  {
    rem=num%10;//reminder
    num=num/10;//quotient
    ans=rem*mul+ans;    //ans
    mul=mul*2;   //mul
               
  }
  cout<<ans<<endl;

}



