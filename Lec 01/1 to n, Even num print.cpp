#include<iostream> 
using namespace std; 

int main()
{
    cout<<"Enter num: "; 
    int num; 
    cin>>num;
    int i=1;

    while(i<=num)
    {
        if(i%2==0)
        {
            cout<<i<<endl; 
        }
        i++;
    } 
    return 0; 
}