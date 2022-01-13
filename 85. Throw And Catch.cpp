#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter 2 numbers to divide";
    cin>>a>>b;
    try
    {
        if(b==0)
            throw 1;
        c=a/b;
            cout<<"Result is:   "<<c<<endl;
    }
        catch(int e)
        {
            cout<<"Division by ZERO"<<endl;
        }
    return 0;
}
