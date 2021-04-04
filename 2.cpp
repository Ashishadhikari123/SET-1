#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter character"<<endl;
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
       {
           cout<<"Alphabet";
       }
       else
        {
            cout<<"Not alphabet";
        }
    return 0;
}
