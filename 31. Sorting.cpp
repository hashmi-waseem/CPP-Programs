#include<iostream>
using namespace std;
int main()
{
	int key, A[10];
	cout << "Enter 10 elements in the array" << endl;
	for (int i = 0; i < 10; i++)
		cin >> A[i];

	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (A[i] > A[i + 1] && i < 9)
			{
				int temp;
				temp = A[i + 1];
				A[i + 1] = A[i];
				A[i] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		cout << A[i] << endl;
	return 0;
}