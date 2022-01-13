#include<iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "Enter a number to check whether it is prime or not" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
		if (sum == n + 1)
		{
			cout << "Number is prime" << endl;
		}
	}
	if (sum != n + 1)
		cout << "It is not a prime number" << endl;
	return 0;
}