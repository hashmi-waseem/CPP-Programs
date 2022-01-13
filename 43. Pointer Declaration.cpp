#include<iostream>
using namespace std;
int main()
{
	int* p;                                                              //Declaration of Pointer
	int x=10;
	p = &x;                                                              //Initialization of Pointer

	cout << "Value of x:	" << x << endl;                              //Value of x which is 10
	cout << "Address of variable x:	" << &x << endl;                     //Address of variable x
	cout << "Location at which is p is pointing:	" << p << endl;      //Displays the location at which p is pointing
	cout << "Address of pointer p:	" << &p << endl;                     //Address of pointer p
	cout << "Value at p:	" << *p << endl;                             //Value at p which is 10
	return 0;

}