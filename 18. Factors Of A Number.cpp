#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number to find the factorial \n";
	cin >> n;
	for (int i = 1 ; i <= n ; i++)
	{
		if (n % i == 0)
		{
			cout << "The factors of the number are:	" << i << endl;
		}
	}
	return 0;
}