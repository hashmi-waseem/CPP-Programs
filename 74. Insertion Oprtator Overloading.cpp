#include<iostream>
using namespace std;
class Complex
{
public:
    int real, img;
    Complex operator+(Complex m);
    friend ostream& operator<<(ostream &p, Complex &n);

};
Complex Complex::operator+(Complex m)
{
    Complex temp;
    temp.real=real+m.real;
    temp.img=img+m.img;
}

ostream& operator<<(ostream &p, Complex &n)
{
    p<<n.real<<"+"<<n.img<<"i"<<endl;
    return p;
}
int main()
{
    Complex a1, a2, a3;
    a1.real=10; a1.img=20;
    a2.real=30; a2.img=40;
    a3=a1+a2;
    cout<<a3<<endl;
    return 0;
}
