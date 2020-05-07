#include<iostream>
#include <cctype>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string* pswd = new string[n];
	bool *charater = new bool[n];
	bool* number = new bool[n];
	bool* other = new bool[n];

	for (int i = 0; i < n; i++)
	{
		cin >> pswd[i];
		
	}

	for (int i = 0; i < n; i++)
	{
		number[i] = 0;
		charater[i] = 0;
		other[i] = 0;
		if (pswd[i].length() < 6)
		{
			cout << "Your password is tai duan le." << endl;
		}
		else
		{
			for (int j = 0; j < pswd[i].length(); j++)
			{
				if (isdigit(pswd[i][j]))
				{
					number[i] = 1;
				}
				else if(isalpha(pswd[i][j]))
				{
					charater[i] = 1;
				}
				else if (pswd[i][j] != '.')
				{
					other[i] = 1;
				}
			}
			
			if(other[i] == 1)
			{
				cout << "Your password is tai luan le." << endl;
			}
			else if (number[i] == 0 && charater[i] == 1)
			{
				cout << "Your password needs shu zi." << endl;
			}
			else if (charater[i] == 0 && number[i] == 1)
			{
				cout << "Your password needs zi mu." << endl;
			}
			else if(charater[i] == 1 && number[i]==1)
			{
				cout << "Your password is wan mei." << endl;
			}

		}
	}
	return 0;
}

