#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int vow=0, con=0, space=0;
    cout<<"Enter a Alphabetic string"<<endl;
    getline(cin, s);
    string::iterator p;

    for(p=s.begin(); p!=s.end(); p++)
    {
        if(*p=='a' || *p=='e' || *p=='i' || *p == 'o' || *p == 'u'|| *p=='A' || *p=='E' || *p=='I' || *p == 'O' || *p == 'U')
            vow++;

        else if(*p==' ')
            space++;

        else
            con++;
    }
    cout<<"Total Number of words entered:   "<<space++<<endl;
    cout<<"Total Number of vowels are:  "<<vow<<endl;
    cout<<"Total Number of consonants are:  "<<con<<endl;
    return 0;
}
