#include<iostream>
using namespace std;
int main()
{
	int sum = 0, n;
	cout << "Enter the number upto which sum is required \n";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		sum = sum + i;
	}
	cout << "Sum is equal to:	" << sum << endl;
	return 0;
}