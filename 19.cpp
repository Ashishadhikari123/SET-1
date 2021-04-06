#include<iostream>
using namespace std;

int main()
{
    int base,power;
    cout<<"Enter base"<<endl;
    cin>>base;
    cout<<"Enter power"<<endl;
    cin>>power;
    long int ans=1;
    while(power)
    {
        ans*=base;
        power--;
    }
    cout<<ans;
    return 0;
}
