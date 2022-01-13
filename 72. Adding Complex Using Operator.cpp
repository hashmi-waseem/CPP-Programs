#include<iostream>
using namespace std;
class complex1
{
    public:
    int real, img;
    complex1 operator+(complex1 n)
    {
        complex1 temp;
        temp.real=real+n.real;
        temp.img=img+n.img;
        return temp;
    }
    complex1 display(complex1 m)
    {
        cout<<m.real<<"+"<<m.img<<"i"<<endl;
    }
};
int main()
{
    complex1 a,b,c;
    a.real=20;
    a.img=90;
    b.real=98;
    b.img=89;
    c=a+b;
    c.display(c);
}
