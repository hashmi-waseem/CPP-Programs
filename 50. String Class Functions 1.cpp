#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, s1, s2, s3, s4, s5, s6;
    char a;
    cout<<"Enter a string of minimum 13 characters"<<endl;
    getline(cin, s);
    cout<<"Enter characters to append at the end of the string"<<endl;
    getline(cin, s1);
    s.append(s1);
    cout<<"String after appending is:   "<<s<<endl;
    cout<<"Enter a string to insert after 13 characters"<<endl;
    getline(cin,s2);
    s.insert(13,s2);
    cout<<"String after entering at 13th position is:     "<<s<<endl;
    cout<<"enter a string to replace 10 characters from index 3 of existing string:   "<<endl;
    getline(cin,s3);
    s.replace(3,10,s3);
    cout<<"String after replacement is:     "<<s<<endl;

    cout<<"Enter one character to add at the end of the string"<<endl;
    cin>>a;
    cin.ignore();
    s.push_back(a);
    cout<<"The string after adding the character is:    "<<s<<endl;
    s.pop_back();
    cout<<"Deleting the last element of the string:     "<<s<<endl;
    cout<<"Enter 2 strings to swap: "<<endl;
    getline(cin,s5);
    getline(cin,s6);
    s5.swap(s6);
    cout<<"After swapping the strings are:  "<<s5<<"    "<<s6<<endl;

    cout<<"Erasing string"<<endl;
    s.erase();
    cout<<"After erasing the string is:     "<<s<<endl;
    return 0;
}
