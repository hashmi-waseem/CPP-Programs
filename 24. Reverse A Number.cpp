#include<iostream>
using namespace std;
int main()
{
	int n, temp = 0, x = 100;
	cout << "Enter a 3 digit number to reverse its digits" << endl;
	cin >> n;
	for (int i = 1; i <= 3; i++)
	{
		int r;
		r = n % 10;
		temp = temp + (r * x);
		x = x / 10;
		n = n / 10;
	}
	cout << "\nThe reverse of the digits is:	" << temp << endl;
	return 0;
}