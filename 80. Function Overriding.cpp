#include<iostream>
using namespace std;
class base
{
public:
    void Function()
    {
        cout<<"Function of base"<<endl;
    }
};
class derived: public base
{
public:
    void Function()
    {
        cout<<"Function of derived"<<endl;
    }
};

int main()
{
    derived d;
    d.Function();
    base *p;
    p=&d;
    p->Function();
    return 0;
}
