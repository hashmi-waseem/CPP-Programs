#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int count = 0;
    cout<<"Enter the username"<<endl;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') || (s[i]=='_') || (s[i]=='.') || (s[i]=='@'))
            count++;
            else
            cout<<"Invalid character entered by user:  "<<s[i]<<endl;
    }
    if(count == s.length())
       cout<<"Email ID is valid"<<endl;
    else
       cout<<"Invalid email id"<<endl;
}
