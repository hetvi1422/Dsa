#include<iostream>
using namespace std;

 bool Prime (int n)
 {
    if (n<2)
    return 0;
    
   for (int i=2;i<=n;i++)
   {
      if(n%1==0)
      return 0;
   }
   return 1;
}

 int Fact(int n)
 {
    int ans=1;
    for(int i=1;i<=n;i++)
    ans =ans*i;
 
   return ans;
}

int main()
{
    int a,b;
    cout<<"enter the number:";
    cin>>a>>b;

    //a is prime or not 
    cout<<Prime(a)<<endl;
    // a's factorial
    cout<<Fact(a)<<endl;
    //b is prime or  not 
    cout<<Prime(b)<<endl;
    //b's factorial
    cout<<Fact(b)<<endl;
    //b-a is prime or not
    cout<<Prime(b-a)<<endl;
    //b-a is factorial
    cout<<Fact(b-a)<<endl;

}