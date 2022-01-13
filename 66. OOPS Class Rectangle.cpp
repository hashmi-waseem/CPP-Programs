#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }
    int perimeter(int length, int breadth)
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r1,r2;
    r1.length=15;
    r1.breadth=10;
    r2.length=13;
    r2.breadth=8;
    cout<<"Area of object r1 is:    "<<r1.area()<<endl;
    cout<<"Area of object r2 is:    "<<r2.area()<<endl;
    return 0;
}
