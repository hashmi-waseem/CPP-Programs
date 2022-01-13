#include<iostream>
using namespace std;
int main()
{
	float bill, discount, total;
	cout << "Enter the bill amount \n";
	cin >> bill;

	if (bill >= 500 && bill<1000)
		discount = ((float)10 / 100) * bill;

	else if (bill >= 1000 && bill<5000)
		discount = ((float)20 / 100) * bill;
	
	else if (bill >= 5000 && bill<10000)
		discount = ((float) 30 / 100) * bill;
	
	else if (bill >= 10000)
		discount = ((float)40 / 100) * bill;
	
	else
		cout << "Discount not applicable please pay full amount\n";

	total = bill - discount;
	cout << "Congrats you got a discount of:	\n" << discount << endl;
	cout << "Total price to be paid after discount is:	" << total << endl;
	return 0;
}