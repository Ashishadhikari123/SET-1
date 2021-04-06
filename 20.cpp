#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"Every number is a factor of Zero";
        return 0;
    }
    cout<<"factors of "<<n<<endl;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<n;
    return 0;
}
