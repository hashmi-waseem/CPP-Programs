#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int age;
	cout << "Enter the age\n";
	cin >> age;
	if (age >= 0 && age <= 5)
	{
		cout << "A Child \n";
	}
	else if (age > 5 && age <= 18)
	{
		cout << "A Minor";
	}
	else if (age > 18 && age <= 55)
	{
		cout << "An Adult \n";
	}
	else if (age > 55 && age <= 85)
	{
		cout << "A Senior Citizen";
	}
	else if (age > 85)
	{
		cout << "Critical State";
	}
	else
		cout << "Please Enter A Valid Age";
}