#include<iostream>
using namespace std;

int main()
{
    int x=0,y=1;
    cout<<"Enter the value of n"<<endl;
    int n,temp;
    cin>>n;
    cout<<"Fibonacci series:"<<endl;
    cout<<x<<" "<<y<<" ";
    for(int i=2;i<n;i++)
    {
        cout<<x+y<<" ";
        temp=x+y;
        x=y;
        y=temp;
    }
    return 0;
}
