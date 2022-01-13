#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s[] = {'H','e','l','l','o','\0'};
	char p[] = "HELLO";
	char q[] = { 65,66,67,68,69,70,0 };
	string a = "Hello How Are You?\0 brother";
	getline(a);
	cout << s << endl;
	cout << p << endl;
	cout << q << endl;
	cout << a << endl;
}
