#include<iostream>
using namespace std;
class employee
{
    private:
    string s;
    int empcode;
    public:
        void setname(string str)
        {
            s.swap(str);
        }
        void getname()
        {
            for(int i=0; i<s.length(); i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        void setempcode(int e)
        {
            empcode=e;
        }
        int getempcode()
        {
            return empcode;
        }
};
class fulltime:protected employee
{
private:
    int salary1=10000;
public:
    void setsalary1(int s)
    {
        salary1=s;
    }
    int getsalary1()
    {
        return salary1;
    }
};


class parttime: public employee
{
private:
    int salary2;
public:
    void setsalary2(int s)
    {
        salary2=s;
    }
    int getsalary2()
    {

        return salary2;
    }
};

int main()
{
    parttime p;
    p.setname("Waseem Hashmi");
    p.getname();
    p.setempcode(01);
    cout<<"Employee code is:    "<<p.getempcode()<<endl;
    p.setsalary2(5000);
    cout<<"Part time salary is: "<<p.getsalary2()<<endl;
    return 0;
}
