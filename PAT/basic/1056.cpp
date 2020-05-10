#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* num = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (num[i] != num[j])
			{
				sum += (num[i] * 10 + num[j]);
				sum += (num[j] * 10 + num[i]);
			}
			else
				sum += (num[i] * 10 + num[j]);
		}
	}
	cout << sum;
	return 0;
}