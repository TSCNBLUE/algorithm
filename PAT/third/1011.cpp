#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n];
	int* boolAdd = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
		if (a[i] + b[i] > c[i] || (a[i]>0 && b[i]>0 && a[i]+b[i]<0))
			boolAdd[i] = 1;
		if (a[i] < 0 && b[i] < 0 && a[i] + b[i] > 0)
			boolAdd[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (boolAdd[i] > 0)
			cout << "Case #" << i+1 << ": true" << endl;
		else
			cout << "Case #" << i+1 << ": false" << endl;
	}
	return 0;
}