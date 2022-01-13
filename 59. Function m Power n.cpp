#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int power(int a, int b)
{
    return pow(a,b);
}
int main()
{
    int x,y;
    cout<<"Enter base and power"<<endl;
    cin>>x>>y;
    cout<<"The result is:   "<<pow(x,y)<<endl;
    return 0;
}
