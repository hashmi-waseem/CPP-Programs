#include<iostream>
using namespace std;
void main()
{
	int b, h;
	float area;
	cout << "Enter the base and height of the triangle \n";
	cin >> b >> h;
	area = (b * h) / 2;
	cout << "Area of the given triangle is: " << area;
}