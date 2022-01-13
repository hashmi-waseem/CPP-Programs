#include<iostream>
using namespace std;
class Complex
{
public:
    int real, img;
    friend Complex operator+(Complex a, Complex b);
};

Complex operator+(Complex a, Complex b)
{
    Complex c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}

int main()
{
    Complex x,y,z;
    x.real=20; x.img=56;
    y.real=10; y.img=5;
    z=x+y;
    cout<<z.real<<"+"<<z.img<<"i"<<endl;
    return 0;
}
