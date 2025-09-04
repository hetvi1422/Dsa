#include<iostream>
#include<math.h>


using namespace std;

int count_digit(int num)
{
    int count=0;  
    while (num)
    {   
        count++;
        num/=10;
    }
    return count;
    
}


bool armstrong(int num, int digit)
{
    int original_num=num,rem, ans=0;

    while (num)
    {
        rem = num%10;
        num/=10;
        ans = ans+pow(rem,digit);

    }
    if(original_num==ans)
    return 1;
    else
    return 0;
}



int main()
{
    int num;
    cout<<"enter the one number: ";
    cin>>num;
//count digit
    int digit=count_digit(num);
//armstrong num
    cout<<armstrong(num,digit)<<endl;
    return 0;
}