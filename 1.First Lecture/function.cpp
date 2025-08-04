#include<iostream>
using namespace std;

int Sum(int m,int n)//function declare
{
    int ans= m+n;//function define
    return ans;
}

int Mul(int m, int n)
{
    int ans=m*n;
    return ans;

}
void fun()
{
    cout<<"heyyyy it's me$";
}



int main ()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
//function call
    int ans= Sum(a,b);
    cout<<ans;
    cout<<endl;
    cout<<Mul(a,b);
    cout<<endl;

    fun();
}