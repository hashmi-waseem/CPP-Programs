#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofs("my.txt",ios::trunc);
    ofs<<("Waseem")<<endl;
    ofs<<"Najeeb"<<endl;
    ofs<<"Hashmi"<<endl;
    ofs.close();
    return 0;
}
