#include<iostream>
using namespace std;
int* heap()
{
    int* p = new int[50];
    cout<<"Address of pointer in function is:  "<<p<<endl;
    return p;
}

int main()
{
    int* q;
    q=heap();
    cout<<"Address of pointer in main is:   "<<q<<endl;
    cout<<"Both are pointing to the same memory in heap, this memory can be utilized accordingly"<<endl;
    return 0;
}
