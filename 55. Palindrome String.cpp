#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,s1;
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    int count=0;
    int len=s.length();
    s1.resize(len);
    for(int i=0, j=len-1; i<len ; i++,j--)
    {
            s1[i]=s[j];
    }
    s1[len]='\0';
    if(s.compare(s1)==0)
        cout<<"It is palindrome"<<endl;
    else
        cout<<"It is not a palindrome"<<endl;
    return 0;
}
