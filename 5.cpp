#include<iostream>
using namespace std;

int main()
{
    int number,fact=1;
    cout<<"Enter number"<<endl;
    cin>>number;
    while(number>0)
    {
        fact=fact*number;
        number--;
    }
    cout<<"Factorial = "<<fact;
    return 0;
}
