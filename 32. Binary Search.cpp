#include<iostream>
using namespace std;
int main()
{
	int A[5], key, start, end, mid, count = 0;
	start = 0;
	end = 4;
	cout << "Enter elements in sorted order for binary search" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> A[i];
	}
	cout << "Enter element to be searched" << endl;
	cin >> key;
	for (int i = 0; i < 5; i++)
	{
		mid = (start + end) / 2;
		if (key == A[mid])
		{
			cout << "Element found at location	" << mid << endl;
			count++;
			break;
		}
		if (key > mid)
		{
			start = mid + 1;
		}
		else if (key < mid)
		{
			end = mid - 1;
		}
	}
	if (count != 1)
	{
		cout << "Element not found" << endl;
	}
	return 0;
}