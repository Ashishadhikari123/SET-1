#include<iostream>
using namespace std;

int fact(int x)
{
    int factorial=1;
    while(x>0)
    {
        factorial=factorial*x;
        x--;
    }
    return factorial;
}

int main()
{
    int sum=0,n,n1;
    cout<<"Enter number"<<endl;
    cin>>n;
    n1=n;
    while(n)
    {
        int d=n%10;
        sum=sum+fact(d);
        n/=10;
    }
    if(n1==sum)
        cout<<"Strong number";
    else
        cout<<"Not Strong number";
}
