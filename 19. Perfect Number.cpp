#include<iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "Enter a number to check if it is perfect or not \n";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
		if (sum == 2 * n)
		{
			cout << "The number is a perfect number" << endl;
		}
	}
	if (sum != 2 * n)
		cout << "It is not a perfect number";
	return 0;
}