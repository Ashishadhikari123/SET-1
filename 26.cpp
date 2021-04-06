#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter year"<<endl;
    cin>>year;
    if(year%400==0)
        cout<<"leap year";
    else
        if(year%100==0)
            cout<<"Not Leap year";
    else
        if(year%4==0)
            cout<<"Leap Year";
    else
        cout<<"Not Leap year";
    return 0;
}
