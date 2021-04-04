#include<iostream>
using namespace std;

int main()
{
    int starting_value,ending_value;
    cout<<"Enter the starting value"<<endl;
    cin>>starting_value;
    cout<<"Enter the ending value"<<endl;
    cin>>ending_value;
    int sum=0;
    for(int i=starting_value;i<=ending_value;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum = "<<sum;
    return 0;
}

