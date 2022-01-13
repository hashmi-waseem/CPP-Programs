#include<iostream>
using namespace std;
int linearsearch(int A[],int size2, int key)
{
    int index;
    for(int i=0; i<size2; i++)
    {
        if(key == A[i])
            index = i;
    }
    if(index >= 0 && index < 10)
        return index;
    else
        return -1;
}

int main()
{
    int  Z[10]={NULL}, key1;
    cout<<"Enter 10 elements in the array"<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>Z[i];
    }
    cout<<"Enter a key to search in the array:  "<<endl;
    cin>>key1;
    if(linearsearch(Z,10,key1)>= 0 && linearsearch(Z,10,key1) < 10)
    {
        cout<<"Element found at location:   "<<linearsearch(Z,10,key1)<<endl;
    }
    else
        cout<<"Element not found"<<endl;
    return 0;
}
