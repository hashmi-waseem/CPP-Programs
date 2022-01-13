#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c, D, root1, root2;
	cout << "Enter the 3 coefficients (a,b,c) of the quadartic equation ax2+bx+c=0 \n";
	cin >> a >> b >> c;
	D = sqrt(((b * b) - (4*(a * c))));
	if (D > 0)
		cout << "Roots are real and unique \n";
	else if (D == 0)
		cout << "Roots are real and equal \n";
	else if(D<0)
		cout << "Roots are imaginary";
	
	root1 = (-b + D) / (2 * a);
	root2 = (-b - D) / (2 * a);

	cout << "\n The first root is:	" << root1;
	cout << "\n The second root is:	" << root2<<endl;
	return 0;
}