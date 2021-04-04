#include<iostream>
using namespace std;

int main()
{
    int num;
    int count=0;
    cout<<"ENTER NUMBER"<<endl;
    cin>>num;
    while(num!=0)
    {
        int d=num%10;
        count++;
        num=num/10;
    }
    cout<<"Number of digits = "<<count;
    return 0;
}
