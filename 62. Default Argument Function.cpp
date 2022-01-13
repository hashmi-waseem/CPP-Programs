#include<iostream>
using namespace std;
int sum(int a=0, int b=0, int c = 0, int d = 0, int e=0)
{
    return a+b+c+d+e;
}
int main()
{
    int v,w,x,y,z,option;
    cout<<"Enter no of operands to add between zero to five"<<endl;
    cin>>option;
    cout<<"Enter the operands"<<endl;
    if(option == 5)
    {
        cin>>v>>w>>x>>y>>z;
        cout<<"Sum is:  "<<sum(v,w,x,y,x)<<endl;
    }
    else if(option == 4)
    {
        cin>>v>>w>>x>>y;
        cout<<"Sum is:  "<<sum(v,w,x,y)<<endl;
    }
    else if(option == 3)
    {
        cin>>v>>w>>x;
        cout<<"Sum is:  "<<sum(v,w,x)<<endl;
    }
    else if(option == 2)
    {
        cin>>v>>w;
        cout<<"Sum is:  "<<sum(v,w)<<endl;
    }
    else if(option == 1)
    {
        cin>>v;
        cout<<"Sum is:  "<<sum(v)<<endl;
    }
    else if(option == 0)
        cout<<"Sum is:  0"<<endl;
    else cout<<"Enter a valid number"<<endl;
    return 0;
}
