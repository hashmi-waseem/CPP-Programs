#include<iostream>
using namespace std;
class rectangle
{
private:
    int length, breadth;
public:
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &rect);

    void setlength(int l);
    void setbreadth(int b);
    int getlength();
    int getbreadth();
    int area();

    ~rectangle();
};
class cuboid: public rectangle
{
private:
    int height;
    public:

    cuboid();
    cuboid(int l, int b, int h);
    cuboid(cuboid &cub);

   void setheight(int h);
   int getheight();
   int getvolume();
   ~cuboid();
};
rectangle::rectangle()
{
    length=0;
    breadth=0;
}
rectangle::rectangle(int l, int b)
{
    length=l;
    breadth=b;
}
rectangle::rectangle(rectangle &rect)
{
    length=rect.length;
    breadth=rect.breadth;
}
void rectangle::setlength(int l)
{
    length=l;
}
void rectangle::setbreadth(int b)
{
    breadth=b;
}
int rectangle::getlength()
{
    return length;
}
int rectangle::getbreadth()
{
    return breadth;
}
int rectangle::area()
{
    return getbreadth()*getlength();
}
rectangle::~rectangle()
{
   cout<<"Destroying rectangle"<<endl;
}

cuboid::cuboid()
{
    setlength(0);
    setbreadth(0);
    height=0;
}
cuboid::cuboid(int l, int b, int h)
{
    setbreadth(b);
    setlength(l);
    setheight(h);
}
cuboid::cuboid(cuboid &cub)
{
    setlength(cub.getlength());
    setbreadth(cub.getbreadth());
    setheight(cub.height);
}
int cuboid::getheight()
{
    return height;
}
void cuboid::setheight(int h)
{
    height=h;
}
int cuboid::getvolume()
{
    return getlength()*getbreadth()*getheight();
}
cuboid::~cuboid()
{
  cout<<"Destroying cuboid"<<endl;
}

int main()
{
    cuboid c;
    c.setlength(12);
    c.setbreadth(10);
    c.setheight(5);
    cout<<"Length is:   "<<c.getlength()<<endl;
    cout<<"Breadth is:  "<<c.getbreadth()<<endl;
    cout<<"Height is:   "<<c.getheight()<<endl;
    cout<<"Volume is:   "<<c.getvolume()<<endl;
    cout<<"Area is:     "<<c.area()<<endl;
    return 0;
}
