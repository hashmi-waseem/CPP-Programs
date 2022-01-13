#include<iostream>
using namespace std;
int main()
{
	cout << "We are going to find the sum of N natural numbers\n";
	cout << "Enter the value of n upto which sum is to be calculated \n";
	int n,sum;
	cin >> n;
	sum = (n * (n + 1)) / 2;
	cout << "The sum of n natural numbers is: " << sum;
	return 0;
}
