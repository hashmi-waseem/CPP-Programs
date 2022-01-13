#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout << "Finding area of circle\n";
	cout << "Enter the radius\n";
	float r, area;
	cin >> r;
	area = ((float)22 / 7) * r * r;
	cout << "Area of the circle is:	" << area;
	return 0;
}