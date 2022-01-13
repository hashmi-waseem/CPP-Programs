#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter the number between whose multiplication is required \n";
	cin >> a;
	for (int i = 0; i <= 20; i++)
	{
		cout << a << "*" << i << "		" << a * i<<endl;
	}
	return 0;
}