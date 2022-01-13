#include<iostream>
using namespace std;
template<class T>
T sum(T a, T b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers to add"<<endl;
    cin>>a>>b;
    cout<<"Sum is:  "<<sum(a,b)<<endl;
}
