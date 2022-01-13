#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int basic, allowance, deduction, net;
	cout << "Enter\n 1. Basic Salary \n 2. Percentage Of Allowances \n 3. Percentage Of Deductions \n";
	cin >> basic >> allowance >> deduction;
	
	net = basic + (basic * allowance) - (basic * deduction);
	cout << "Net Salary Is:	" << net;
	return 0;
}