#include<iostream>
using namespace std;
int division(int x, int y)
{
    int z;
    if(y==0)
        throw 1;
    z=x/y;
    return z;
}
int main()
{
    int a,b;
    cout<<"Enter 2 numbers to divide"<<endl;
    cin>>a>>b;
    try
    {
        cout<<"The Quotient is: "<<division(a,b)<<endl;
    }
    catch(int e)
    {
        cout<<"Division by ZERO"<<endl;
    }
    return 0;
}
