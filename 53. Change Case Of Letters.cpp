#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, s1; int x;
    cout<<"Enter a string in any case"<<endl;
    getline(cin,s);
    cout<<"Enter 1 to change the string into UPPER case OR Enter 2 to change string into LOWER case"<<endl;
    cin>>x;
    string::iterator p;
    switch(x)
    {
        case 1:
            for(p=s.begin(); p!=s.end(); p++)
               {
                   if(*p>='a' && *p<='z')
                   {
                    s1= *p-32;
                    cout<<s1;
                   }
                   else
                   {
                       s1=*p;
                       cout<<s1;
                   }
               }
               break;
        case 2:
            for(p=s.begin(); p!=s.end(); p++)
            {
                if(*p>='A' && *p<='Z')
                {
                    s1=*p+32;
                    cout<<s1;
                }
                else
                {
                    s1=*p;
                    cout<<s1;
                }
            }
            break;
        default: cout<<"Please input a valid choice"<<endl;
    }
    return 0;
}
