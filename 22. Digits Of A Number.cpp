#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number to check its last 3 digits" << endl;
	cin >> n;
	for (int i = 1; i <= 3; i++)
	{
		int r;
		r = n % 10;
		n = n / 10;
		cout << "The digits are:	" << r << endl;
	}
	return 0;
}