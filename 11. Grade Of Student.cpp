#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m1, m2, m3, m4, m5;
	float average;
	cout << "Enter marks of 5 subjets:	\n";
	cin >> m1 >> m2 >> m3 >> m4 >> m5;
	average = (m1 + m2 + m3 + m4 + m5) / (float)5;
	cout <<"Average Is"<< average<< endl;
	if (average > 80)
		cout << "Grade A \n";
	else if (average > 60)
		cout << "Grade B \n";
	else if (average > 30)
		cout << "\nGrade C \n";
	return 0;
}