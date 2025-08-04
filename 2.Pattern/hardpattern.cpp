#include<iostream>
using namespace std;
int main()
{
    
    int i,j;
    int n;
    cout<<"Input any number";
    cin>>n;
    
    for(i=1;i<=n;i=i+1)
    {
        
        for(j=1;j<=n-i;j=j+1)
        {
        cout<<"  ";
        }
        
        for(j=i;j>=1;j=j-1)
        {
            cout<<j<<" ";
        }
    cout<<endl;
    }
}
