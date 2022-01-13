#include<iostream>
#include<string>
using namespace std;

class student
{
private:
    int rollno, m1, m2, m3, total;
    char name[50]="NULL";
public:
    student();
    student(int r, int m1, int m2, int m3);
    student(student(&stu));

    void setmarks1(int m1);
    void setmarks2(int m2);
    void setmarks3(int m3);
    void setname(char name[]);

    void getname();
    int getmarks1();
    int getmarks2();
    int getmarks3();
    int gettotal();
    char getgrade();

    ~student();
};

int main()
{
    char A[] = "Waseem Najeeb Hashmi";
    student s1;
    s1.setmarks1(88);
    s1.setmarks2(82);
    s1.setmarks3(80);
    s1.setname(A);

    cout<<"Name of the student is:  ";
    s1.getname();
    cout<<endl;
    cout<<"Marks in 1st subject is: "<<s1.getmarks1()<<endl;
    cout<<"Marks in 2nd subject is: "<<s1.getmarks2()<<endl;
    cout<<"Marks in 3rd subject is: "<<s1.getmarks3()<<endl;
    cout<<"Total marks is:  "<<s1.gettotal()<<endl;
    cout<<"Grade is:    "<<s1.getgrade()<<endl;
    return 0;
}

student::student()
{
    m1=m2=m3=rollno=total=0;
    //name="NULL";
}

student::student(int r, int m1, int m2, int m3)
{
    rollno=r;
    this->m1=m1;
    this->m2=m2;
    this->m3=m3;
    total=m1+m2+m3;
    //name="NULL";
}

student::student(student(&stu))
{
    rollno=stu.rollno;
    m1=stu.m1;
    m2=stu.m2;
    m3=stu.m3;
    total=stu.total;
    //name=stu.name;
}

void student::setmarks1(int m1)
{
    this->m1=m1;
}

void student::setmarks2(int m2)
{
    this->m2=m2;
}

void student::setmarks3(int m3)
{
    this->m3=m3;
}

void student::setname(char A[])
{
    for(int i=0, j=0; i < 50 && j < 21; i++, j++)
    {
        name[i]=A[j];
    }
}

void student::getname()
{
    for(int i=0; i<50; i++)
    {
        cout<<name[i];
    }
}

int student::getmarks1()
{
    return m1;
}

int student::getmarks2()
{
    return m2;
}

int student::getmarks3()
{
    return m3;
}

int student::gettotal()
{
    return m1+m2+m3;
}

char student::getgrade()
{
    int total;
    total=gettotal();
    if(total/3 >= 75 && (total/3) <= 100)
        return 'A';
    else if(total/3 >= 50 && total/3 < 75)
        return 'B';
    else if(total/3 >= 35 && total/3 < 50)
        return 'C';
    else if(total/3 >= 0 && total/3 < 35)
        return 'D';
    else
        cout<<"Invalid Grade"<<endl;
}

student::~student()
{
    cout<<"Destroying student data"<<endl;
}
