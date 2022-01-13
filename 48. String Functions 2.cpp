#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s[50];
	cout << "Enter a numeric character" << endl;
	cin >> s;
	int long z = strtol(s, NULL, 10);
	cout << "The string converted to long integer is:		" << z << endl;
	z = z + 10;
	cout << "Arithmetic operation on the long integer is valid	" << z << endl;

	float f = strtof(s, NULL);
	cout << "The string converted to float is:		" << f << endl;
	f = f + 1.5;
	cout << "Arithmetic operation on the float is valid	" << f << endl;



	return 0;
}

