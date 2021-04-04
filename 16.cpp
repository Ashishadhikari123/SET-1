#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    int max=a>b?a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            cout<<"LCM = "<<max;
            break;
        }
        else
            max++;
    }
    return 0;
}
