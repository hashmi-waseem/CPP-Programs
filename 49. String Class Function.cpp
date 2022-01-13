#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    cout<<"The Length of the string is:     "<<s.length()<<endl;
    cout<<"The Size of the string is:       "<<s.size()<<endl;
    cout<<"The Capacity Of the string is:       "<<s.capacity()<<endl;
    cout<<"The string is being resized to 100      "<<endl;
    s.resize(100);
    cout<<"The new size of the string is:       "<<s.size()<<endl;
    cout<<"The Max Size of the string is:       "<<s.max_size()<<endl;
    cout<<"Clearing the string      "<<endl;
    s.clear();
    cout<<"Checking if the string is empty      "<<endl;
    if(s.empty())
    {
        cout<<"The string is empty      "<<endl;
    }
    else
        cout<<"The string is not empty"<<endl;
    return 0;
}
