#include<iostream>
using namespace std;

int main()
{
    int sum=0,n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    while(n)
    {
        int d=n%10;
        sum+=d;
        n=n/10;
    }
    cout<<"Sum of digits = "<<sum;
    return 0;
}
