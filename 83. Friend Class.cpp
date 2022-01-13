#include<iostream>
using namespace std;
class sum;
class add
{
    private:
    int a=10, b=20;

    friend sum;
};
class sum
{
    private:
    add m;
    m.a=10;
    int c = m.a+m.b;
    public:
    int getsum()
    {
        return m.a+m.b;
    }
};
int main()
{
    sum q;
    cout<<"Sum is:   "<<q.getsum()<<endl;
    return 0;
}
