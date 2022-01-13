#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, s1, s2, s3, s4, s5, s6, s7, s8;
    char a[50];
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    cout<<"Copying the string to character array"<<endl;
    s.copy(a,s.length());
    a[s.length()]='\0';
    cout<<"Character array after copying is:    "<<a<<endl;
    cout<<"Enter a string to find in the main string"<<endl;
    getline(cin, s1);
    cout<<"String found at location:    "<<s.find(s1)<<endl;
    cout<<"Enter a string to find from reverse direction in main string"<<endl;
    getline(cin, s2);
    cout<<"String found at location:    "<<s.rfind(s2)<<endl;
    cout<<"Enter random characters to check if any one of them exists in the string"<<endl;
    getline(cin, s3);
    cout<<"One character forund at location:    "<<s.find_first_of(s3)<<endl;
    cout<<"Enter random characters to check if any one of them exists in the string while searching from end of string"<<endl;
    getline(cin, s4);
    cout<<"One character found at location:     "<<s.find_last_of(s4)<<endl;
    cout<<"Displaying sub string from main string from index 0 upto 10 characters";
    cout<<":     "<<s.substr(0,10)<<endl;
    cout<<"Enter two strings to compare:    "<<endl;
    getline(cin,s5);
    getline(cin,s6);
    cout<<"If first string is greater value will be positive, if first string is smaller value will be negative, if both strings are equal value will be zero"<<endl;
    cout<<s5.compare(s6)<<endl;
    cout<<"Enter the index of main string to display the character stored at that particular index"<<endl;
    int x;
    cin>>x;
    cin.ignore();
    cout<<"Element at given index is:   "<<s.at(x)<<endl;
    cout<<"String can be concatenated using + sign and can be copied using = sign"<<endl;
    cout<<"Enter 2 strings to concatenate"<<endl;
    getline(cin,s7);
    getline(cin,s8);
    cout<<"Strings after concatenation using + sign is:     "<<s7+s8<<endl;
    s7=s8;
    cout<<"Copying the second string to first and printing both:    "<<s7<<s8<<endl;
    return 0;
}
