#include<iostream>
using namespace std;
int main()
{
	int A[10], sum = 0;
	cout << "Enter elements of array" << endl;
	for (int i = 0; i < 10; i++)
		cin >> A[i];
	for (int j = 0; j < 10; j++)
	{
		sum = sum + A[j];
	}
	cout << sum;
	return 0;
}
