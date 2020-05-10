#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int i = 0, j = 0;
	int count1 = 0, count2 = 0;
	string str1, str2;
	char char1, char2;
	cin >> str1 >> char1 >> str2 >> char2;
	for (int m = 0; m < str1.length(); m++)
	{
		if (str1[m] == char1)
			count1++;
	}
	for (int n = 0; n < str2.length(); n++)
	{
		if (str2[n] == char2)
			count2++;
	}
	while (count1 > 0)
	{
		i += pow(10.0 , count1-1) * (char1 - '0');
		count1--;
	}
	while (count2 > 0)
	{
		j += pow(10.0 , count2-1) * (char2 - '0');
		count2--;
	}
	cout << i + j;
	return 0;
}