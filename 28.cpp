#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int n1=n;
    int reverse=0;
    while(n1)
    {
        int d=n1%10;
        reverse=reverse*10+d;
        n1/=10;
    }
    if(n==reverse)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}
