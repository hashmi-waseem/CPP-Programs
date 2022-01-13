#include<iostream>
using namespace std;
int main()
{
	int A[10];
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cout << "(" << i << "," << j << ")";
		}
		cout << endl;
	}
	return 0;
}