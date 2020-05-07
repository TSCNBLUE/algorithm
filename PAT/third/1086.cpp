#include<iostream>
#include<string>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	string str = to_string(m * n);
	int i = str.length()-1;
	while (str[i] == '0')
	{
		i = i - 1;
	}
	for (i; i >=0 ; i--)
	{

		cout << str[i];
	}
	return 0;

}