#include<iostream>
using namespace std;
class rectangle
{
private:
    int length, breadth;
public:
    int setLength(int l)
    {
        if(l>=0)
            length = l;
        else
            cout<<"Invalid Length"<<endl;
    }
    int setBreadth(int b)
    {
        if(b>=0)
            breadth=b;
        else
            cout<<"Invalid breadth"<<endl;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getLength()
    {
        return length;
    }
    int area()
    {
        return length*breadth;
    }

};

int main()
{
    rectangle r1;
    r1.setLength(15);
    r1.setBreadth(10);
    cout<<"Length is:   "<<r1.getLength()<<endl;
    cout<<"Breadth is:  "<<r1.getBreadth()<<endl;
    cout<<"Area is:     "<<r1.area()<<endl;
    return 0;
}
