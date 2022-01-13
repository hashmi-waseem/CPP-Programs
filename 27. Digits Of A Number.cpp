#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, rev = 0, x = 100, j = 1;
	cout << "Enter a number to print its digits in words" << endl;
	cin >> n;
	for (int i = 1; i <= 3; i++)
	{
		int r;
		r = n % 10;
		rev = rev + r * x;
		x = x / 10;
		n = n / 10;
	}
	do
	{
		j++;
		switch (rev % 10)
		{
		case 1: cout << "ONE" << endl;
			break;
		case 2: cout << "TWO" << endl;
			break;
		case 3: cout << "THREE" << endl;
			break;
		case 4: cout << "FOUR" << endl;
			break;
		case 5: cout << "FIVE" << endl;
			break;
		case 6: cout << "SIX" << endl;
			break;
		case 7: cout << "SEVEN" << endl;
			break;

		case 8: cout << "EIGHT" << endl;
			break;
		case 9: cout << "NINE" << endl;
			break;
		case 0: cout << "ZERO" << endl;
			break;
		default: cout << "Enter a valid number" << endl;
			break;
		}
	rev = rev / 10;
	} while (j <= 3);
}