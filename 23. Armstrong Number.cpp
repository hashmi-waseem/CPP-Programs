#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, temp, sum = 0;
	cout << "Enter a 3 digit number to check whether it is armstrong number or not" << endl;
	cin >> n;
	temp = n;
	for (int i = 1; i <= 3; i++)
	{
		int r;
		r = n % 10;
		sum = sum + (r*r*r);
		n = n / 10;
	}
	n = temp;
	if (sum == n)
		cout << "Number is an Armstrong Number" << endl;
	else if (sum != n)
		cout << "It is not an Armstrong Number" << endl;
	return 0;
}