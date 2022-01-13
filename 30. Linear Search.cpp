#include<iostream>
using namespace std;
int main()
{
	int pos, key, A[5] = { 21,25,97,86,308 }, count = 0;
	cout << "Enter the element to search" << endl;
	cin >> key;
	for (int i = 0; i < 5; i++)
	{
		if (A[i] == key)
		{
			cout << "Element found at position:	" << i << endl;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Element not found" << endl;
	}
	return 0;
}