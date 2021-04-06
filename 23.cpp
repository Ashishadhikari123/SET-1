#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int n1=n;
    int sum=0;
    while(n1)
    {
        int d=n1%10;
        sum=d*d*d+sum;
        n1/=10;
    }
    if(sum==n)
        cout<<"Armstrong Number";
    else
        cout<<"Not Armstrong Number";
    return 0;
}
