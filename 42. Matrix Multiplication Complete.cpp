#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int row1, row2, column1, column2;
	cout << "Enter the value of row and column of Matrix 1" << endl;
	cin >> row1 >> column1;
	cout << "Enter the value of row and column of Matrix 2" << endl;
	cin >> row2 >> column2;
	if (column1 == row2)
	{
		cout << "Matrix Multiplication is valid for the given Matrices" << endl;
	}
	else
	{
		cout << "Matrix Multiplication is not valid for the given data" << endl;
		exit(0);
	}

	int A[row1][column1], B[row2][column2], C[row1][column2];
	cout << "Enter the elements of the first matrix" << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column1; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "Enter the elements of the second matrix" << endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			C[i][j] = A[i][j] * B[i][j];
		}
	}
	cout << "The resultant matrix is" << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			cout << C[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}