#include<iostream>
using namespace std;
class rectangle
{
private:
    int length, breadth;
public:
    int setlength(int l)
    {
    length = l;
    }
    int setbreadth(int b)
    {
    breadth = b;
    }
    int area()
    {
    return length*breadth;
    }

    rectangle()                                //Default / Non Parameterized Constructor
    {
        length = 0;
        breadth = 0;
    }

    rectangle(int l, int b)                      //Parameterized Constructor
    {
        setlength(l);
        setbreadth(b);
    }
    rectangle(rectangle(&rect))                    //Copy Constructor
    {
        length=rect.length;
        breadth=rect.breadth;
    }
};
int main()
{
    rectangle r(4,5);
    cout<<"Area is: "<<r.area()<<endl;
    rectangle r1;
    cout<<"Area is:  "<<r1.area()<<endl;
    rectangle r3(r);
    cout<<"Area is: "<<r3.area()<<endl;
    return 0;
}
