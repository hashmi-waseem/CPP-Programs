#include<iostream>
using namespace std;
int main()
{
	int n, x = 100, sum = 0, temp;
	cout << "Enter a number to check whether it is palindrome or not" << endl;
	cin >> n;
	temp = n;
	for (int i = 1; i <= 3; i++)
	{
		int r;
		r = n % 10;
		sum = sum + r * x;
		x = x / 10;
		n = n / 10;
	}
	n = temp;
	if (sum == n)
		cout << "Number is Palindrome" << endl;
	else
		cout<< "Number is not a Palindrome" << endl;
	return 0;
}