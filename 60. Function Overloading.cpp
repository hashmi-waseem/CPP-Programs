#include<iostream>
#include<string>
using namespace std;
int minimum(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int minimum(int a, int b, int c)
{
    if(a<b && a<c)
        return a;
    else if(b<c)
        return b;
    else
        return c;
}

int main()
{
    int x,y,z,choice;
    cout<<"Enter 1 to calculate minimum of 2 numbers OR enter 2 to calculate minimum of 3 numbers"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"Enter 2 numbers"<<endl;
        cin>>x>>y;
        cout<<"Minimum is:  "<<minimum(x,y);
        break;

    case 2:
        cout<<"Enter 3 numbers"<<endl;
        cin>>x>>y>>z;
        cout<<"Minimum is:  "<<minimum(x,y,z)<<endl;
        break;

    default: cout<<"Enter a valid choice"<<endl;
    }
    return 0;
}
