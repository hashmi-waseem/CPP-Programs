#include<iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout<<"This is base class"<<endl;
    }
};
class derived: public base
{
public:
    void display()
    {
        cout<<"This is derived class"<<endl;
    }
};
int main()
{
    derived d;
    base *p;
    p=&d;
    d.display();
    p->display();
    return 0;
}
