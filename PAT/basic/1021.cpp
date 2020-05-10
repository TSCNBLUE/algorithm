#include<iostream>
using namespace std;

int main()
{
	int array[10] = { 0,0,0,0,0,0,0,0,0,0 };
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		switch (str[i] - '0')
		{
		case 0:
			array[0]++;
			break;
		case 1:
			array[1]++;
			break;
		case 2:
			array[2]++;
			break;
		case 3:
			array[3]++;
			break;
		case 4:
			array[4]++;
			break;
		case 5:
			array[5]++;
			break;
		case 6:
			array[6]++;
			break;
		case 7:
			array[7]++;
			break;
		case 8:
			array[8]++;
			break;
		case 9:
			array[9]++;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (array[i] > 0)
			cout << i << ":" << array[i] << endl;
	}
	return 0;
}