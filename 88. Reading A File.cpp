#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream of("my.txt", ios::trunc);
    {
        of<<"Waseem Najeeb Hashmi"<<endl;
        of<<39<<endl;
    }


    ifstream inf;
    inf.open("my.txt");
    if(!inf)
        cout<<"File cannot be opened"<<endl;

    string s;
    int x;
    inf>>s;
    inf>>x;
    cout<<s<<"    "<<x<<endl;
    return 0;

}
