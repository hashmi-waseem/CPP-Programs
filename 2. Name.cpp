#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	cout << "Enter Your Name\n";
	getline(cin, name);
	cout << "How Are You " << name;
	return 0;
}