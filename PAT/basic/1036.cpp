#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	char x;
	cin >> n >> x;
	int row, col;
	col = n;
	row = round(n / 2.0) - 2;

	for (int i = 0; i < col; i++)
	{
		cout << x;
	}
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		cout << x;
		for (int j = 0; j < (col - 2); j++)
			cout << " ";
		cout << x << endl;
	}

	for (int i = 0; i < col; i++)
	{
		cout << x;
	}
	return 0;
}