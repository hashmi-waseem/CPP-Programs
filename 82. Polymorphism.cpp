#include<iostream>
using namespace std;
class shape
{
public:
    virtual int area()=0;
    virtual int perimeter()=0;
    virtual void dimension()=0;
};
class rectangle: public shape
{
private:
    int length=10, breadth=20;
public:
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void dimension()
    {
        cout<<"Length is:   "<<length<<endl;
        cout<<"Breadth is:   "<<breadth<<endl;
    }
};

class circle: public shape
{
private:
    int radius=5;
public:
    int area()
    {
        return (22/7)*radius*radius;
    }
    int perimeter()
    {
        return 2*radius;
    }
    void dimension()
    {
        cout<<"The radius is:   "<<radius<<endl;
    }
};
int main()
{
    rectangle r;
    circle c;
    shape *s;

    s=&r;
    cout<<"Area using pointer of base class:    "<<s->area()<<endl;
    cout<<"Perimeter using pointer of base class:   "<<s->perimeter()<<endl;
    s->dimension();

    cout<<endl<<endl;

    s=&c;
    cout<<"Area using pointer of base class:    "<<s->area()<<endl;
    cout<<"Perimeter using pointer of base class:   "<<s->perimeter()<<endl;
    s->dimension();

    return 0;
}
