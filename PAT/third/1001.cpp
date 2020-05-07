# include<iostream>
using namespace std;

int fun1()
{
	int i = 0;
	int n;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			n = (3 * n + 1) / 2;
		i++;
	}
	cout << i;
	return 0;
}