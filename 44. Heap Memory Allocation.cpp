#include<iostream>
using namespace std;
int main()
{
	int* p;
	p = new int[5];     //Memory allocated in heap, can be accessed using p.
	cout << "Enter the elements of the array" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> p[i];
	}
	p[2] = 10;
	cout << p[2] << endl;
	delete[]p;         //Deleting memory from heap.
	p = nullptr;
	return 0;
}