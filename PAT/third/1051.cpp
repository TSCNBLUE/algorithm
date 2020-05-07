#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double arr[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	double a, b, A1, B1, A2, B2;   //注意这个double
	A1 = arr[0] * cos(arr[1]);     //三角函数返回值是double
	B1 = arr[0] * sin(arr[1]);
	A2 = arr[2] * cos(arr[3]);
	B2 = arr[2] * sin(arr[3]);
	a = A1 * A2 - B1 * B2;
	b = A1 * B2 + A2 * B1;

	if (abs(a) < 0.01)        //自动四舍五入结果是-0.00
		a = 0;
	if (abs(b) < 0.01)
		b = 0;

	if (b < 0)
		cout << fixed << setprecision(2) << a << b << "i";
	else
		cout << fixed << setprecision(2) << a << "+" << b << "i";

	return 0;
}