#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout << "Enter the details of the quadratic equation as asked below \n";
	cout << "Enter the co-efficients a,b,c of the quadratic equation ax2+bx+c respectively \n";
	int a, b, c, root1, root2;
	cin >> a >> b >> c;
	if (((b * b) - 4 * (a * c)) >= 0)
	{
		root1 = (-b + (sqrt((b * b) - 4 * (a * c)))) / (2 * a);
		root2 = (-b - (sqrt((b * b) - 4 * (a * c)))) / (2 * a);
		cout << "the roots of the equation are: " << root1 <<"    " << root2;
	}
	else
		cout << "roots are imaginary\n";
	return 0;
}
