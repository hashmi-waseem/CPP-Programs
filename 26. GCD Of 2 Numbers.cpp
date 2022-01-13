#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter 2 numbers to calculate GCD" << endl;
	cin >> a >> b;
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else if (b > a)
		{
			b = b - a;
		}
	}
	cout << "GCD of the 2 numbers is	" << a << endl;
	return 0;
}