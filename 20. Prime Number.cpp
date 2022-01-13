#include<iostream>
using namespace std;
int main()
{
	int n, flag = 0;
	cout << "Enter a number to check whether it is prime or not" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			flag++;
		}
	}
	if (flag == 2)
		cout << "It is a prime number" << endl;
	else
		cout << "It is not a prime number" << endl;
	return 0;
}