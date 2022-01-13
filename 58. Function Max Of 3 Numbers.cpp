#include<iostream>
#include<string>
using namespace std;
int max(int a, int b, int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else return c;
}
int main()
{
    int x, y, z;
    cout<<"Enter 3 numbers"<<endl;
    cin>>x>>y>>z;
    cout<<"Maximum of these 3 numbers is:   "<<max(x,y,z)<<endl;
    return 0;
}
