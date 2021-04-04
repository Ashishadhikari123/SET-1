#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter character"<<endl;
    cin>>ch;
    if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    {
        cout<<"vowel";
    }
    else
        if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
        cout<<"vowel";
    }
    else
        cout<<"consonant";
    return 0;
}
