#include<iostream>
using namespace std;
int swap1(int x, int y)                      //PASS BY VALUE
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int swap2(int* x, int* y)                       //PASS BY ADRESS
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int swap3(int &x, int &y)                        //PASS BY REFERENCE
{
    int temp;
    temp= x;
    x=y;
    y=temp;
}

int main()
{
    int a, b, option;
    cout<<"Enter 1 To swap 2 numbers using Pass By Value"<<endl;
    cout<<"Enter 2 to swap 2 numbers using Pass By Address"<<endl;
    cout<<"Enter 3 to swap 2 numbers using Pass By Reference"<<endl;
    cin>>option;
    cout<<"Enter 2 numbers to swap"<<endl;
    cin>>a>>b;
    switch(option)
    {
    case 1:
        swap1(a,b);
        cout<<"Swapping using Pass By Value:    "<<a<<"    "<<b<<endl;
        break;
    case 2:
        swap2(&a, &b);
        cout<<"Swapping using Pass By Address:  "<<a<<"    "<<b<<endl;
        break;
    case 3:
        swap3(a, b);
        cout<<"Swapping using Pass By Reference:    "<<a<<"    "<<b<<endl;
        break;
    default:
        cout<<"Enter a valid choice"<<endl;
        break;
    }
    return 0;
}
