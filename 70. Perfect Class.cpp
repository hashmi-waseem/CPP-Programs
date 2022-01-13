#include<iostream>
using namespace std;
class rectangle
{
private:
    int length, breadth;
public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle(&rect));

    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();

    int area();
    int perimeter();
    bool isSquare();

    ~rectangle();
};
int main()
{
    rectangle r;
    r.setLength(10);
    r.setBreadth(10);
    cout<<"Area of the rectangle is:    "<<r.area()<<endl;
    cout<<"Perimeter of the rectangle is:   "<<r.perimeter()<<endl;
    if(r.isSquare())
        cout<<"It is a Square"<<endl;
    else
        cout<<"It is not a square"<<endl;
    return 0;
}

rectangle::rectangle()
{
    length = 1;
    breadth = 1;
}

rectangle::rectangle(int l, int b)
{
    length=l;
    breadth=b;
}

rectangle::rectangle(rectangle (&rect))
{
    length=rect.length;
    breadth=rect.breadth;
}

void rectangle::setLength(int l)
{
    length=l;
}

void rectangle::setBreadth(int b)
{
    breadth=b;
}

int rectangle::getLength()
{
    return length;
}

int rectangle::getBreadth()
{
    return breadth;
}

int rectangle::area()
{
    return length*breadth;
}

int rectangle::perimeter()
{
    return 2*(length+breadth);
}

bool rectangle::isSquare()
{
    if(length == breadth)
        return 1;
    else
        return 0;
}

rectangle::~rectangle()
{
    cout<<"Destroying the rectangle";
}
