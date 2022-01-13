#include<iostream>
using namespace std;
class base
{
private:
    int a=10;
public:
    base()
    {
        cout<<"hi"<<endl;
    }
    base(int a)
    {
        cout<<"Base class constructor value is: "<<a<<endl;
    }
    base(int z, int y)
    {
        cout<<"Base 2 variables"<<endl;
    }
};
class derived: public base
{
private:
    int x=20;
public:
    derived()
    {
        cout<<"hello"<<endl;
    }
    derived(int x, int a): base(x,a)
    {
        cout<<"Derived class constructor value is:  "<<x<<"  "<<a<<endl;
    }
};
int main()
{
    derived d(10,15);
    return 0;
}
