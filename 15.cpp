#include<iostream>
using namespace std;

int main()
{
    int n,reverse=0;
    cout<<"Enter number"<<endl;
    cin>>n;
    while(n)
    {
        int d=n%10;
        reverse=reverse*10+d;
        n/=10;
    }
    cout<<"Reverse of number = "<<reverse;
    return 0;
}
