#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length, breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle *p;
    p = new rectangle;
    p->length = 10;
    p->breadth = 15;
    cout<<"Area of the rectangle in heap is:    "<<p->area()<<endl;
}
