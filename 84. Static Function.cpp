#include<iostream>
using namespace std;
class student
{
private:
    int rollno=0;
    static int admission;
public:
    static void setadminno()
    {
        admission++;
    }

    void setrollno()
    {
    rollno=admission;
    }
    void getdata()
    {
        cout<<"Roll No of student is:   "<<rollno<<endl;
    }
};
int student::admission=0;

int main()
{
    student s1;
    s1.setadminno();
    s1.setrollno();
    s1.getdata();

    student s2;
    s2.setadminno();
    s2.setrollno();
    s2.getdata();

    student s3;
    s3.setadminno();
    s3.setrollno();
    s3.getdata();
    return 0;
}
