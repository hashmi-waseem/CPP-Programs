#include<iostream>
using namespace std;
class rational
{
    public:
    int p,q;
    rational operator+(rational a)
    {
        rational sum;
        sum.p=(p*a.q) + q*a.p;
        sum.q=q*a.q;
        return sum;
    }
    friend  ostream& operator<<(ostream &p, rational &r);
};
ostream & operator<<(ostream &p, rational &r)
{
    p<<r.p<<"/"<<r.q;
    return p;
}
int main()
{
    rational t,u,v;
    t.p=10; t.q=20;
    u.p=30; u.q=50;
    v=t+u;
    cout<<t<<" + "<<u<<" = "<<v<<endl;
    return 0;
}
