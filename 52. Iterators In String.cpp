#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    cout<<"Printing elements of string one by one"<<endl;
    string::iterator p;
    for(p=s.begin(); p!=s.end(); p++)
    {
        cout<<*p<<endl;
    }
    cout<<"Printing String in reverse"<<endl;
    string::reverse_iterator q;
    for(q=s.rbegin(); q!=s.rend(); q++)
        cout<<*q;

    return 0;
}
