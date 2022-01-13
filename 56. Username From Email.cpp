#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s,s1;
    cout<<"Enter a string"<<endl;
    getline(cin, s);
    int x=0;
    x = s.find('@');
    cout<<"Method 1 of getting username:    "<<endl;
    s1=s.substr(0,x);
    cout<<s1<<endl;
    cout<<"Method 2 of getting username:    "<<endl;
    cout<<"The username is:     "<<endl;
    for(int i=0; i<x; i++)
    {
        cout<<s[i];
    }
    return 0;
}
