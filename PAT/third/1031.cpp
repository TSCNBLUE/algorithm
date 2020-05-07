#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cin >> n;
	int* add = new int[n];
	int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char mArray[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	bool* output = new bool[n];
	string* str = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i < n; i++)
	{
		add[i] = 0;
		for (int j = 0; j < 17; j++)  //计算加权
		{
			add[i] += (str[i][j] - '0') * weight[j];
		}
		
		int a = add[i] % 11;       //判断是否相等
		if (mArray[a] == str[i][17])
			output[i] = 0;
		else
			output[i] = 1;

		
		sum += output[i];
	}

	if (sum > 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (output[i] == 1)
				cout << str[i] << endl;
		}
	}
	else
	{
		
		cout << "All passed";
	}
	return 0;
}