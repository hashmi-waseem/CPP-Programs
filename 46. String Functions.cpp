#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[50];
	cout << "Enter the string" << endl;
	cin.getline(s,50);
	cout << s << endl;
	cout << strlen(s) << endl;

	char s1[50], s2[50], s3[50];
	cout << "Enter 2 strings" << endl;
	cin.getline(s1, 50);
	cin.getline(s2, 50);
	strcat(s1, s2);
	cout << "Concatanated characters without limit are	" << s1 << endl;
	strncat(s1, s2, 7);
	cout << "Concatanted characters of string with limit of 7 are:	" << s1 << endl;
	strcpy(s3, s1);
	cout << "The elements copied in s3 are:	" << s3 << endl;
	strncpy(s3, s1, 3);
	cout << "Elements Copied In s3 after limiting to 3 characters are	" << s3 << endl;
    return 0;
}
