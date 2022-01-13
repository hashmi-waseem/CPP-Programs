#include<iostream>
using namespace std;
int main()
{
	int sum = 1, n;
	cout << "Enter a number to calculate factorial";
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		sum = sum * i;
	}
	cout << "Factorial Is:	" << sum;
	return 0;
}