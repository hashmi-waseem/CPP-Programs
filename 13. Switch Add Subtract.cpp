#include<iostream>
using namespace std;
int main()
{
	int a, b, option, c, result;
	cout << "Enter any number if you want to use calculator\n";
	cout << "\nOtherwise enter any character to exit\n";
	cin >> c;
	cout << "Choose the operation which you want to perform\n";
	cout << "\n 1. Addtition	2. Subtraction	3. Multiplication	4. Division	\n";
	cin >> option;
	cout << "Enter 2 operands\n";
	cin >> a >> b;
	switch (option)
	{
	case 1: result = a + b;
		cout << result << endl;
		break;
	case 2: result = a - b;
		cout << result << endl;
		break;
	case 3: result = a * b;
		cout << result << endl;
		break;
	case 4: result = a / b;
		cout << result << endl;
		break;
	default:cout << "Please enter a valid option\n";
		break;
	}
	return 0;
}