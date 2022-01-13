#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[50], s1[50];
	cout << "Enter a string of characters" << endl;
	cin.getline(s, 50);
	cout << "Enter a sub string to search if it is present in the main string" << endl;
	cin.getline(s1, 50);
	cout << "The substring found is:	" << strstr(s, s1) << endl;
	return 0;
}