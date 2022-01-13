#include<iostream>
using namespace std;
int main()
{
	int A[10], max = INT_MIN;
	cout << "Enter 10 elements of array" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	cout << "Maximum of entered data is:	" << max << endl;
	return 0;
}