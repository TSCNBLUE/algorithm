#include<iostream>
using namespace std;

struct Answer
{
	char problem;
	char _ ;
	char boolean;
};

int main()
{
	int n;
	cin >> n;
	Answer *arr = new Answer[n * 4];
	for (int i = 0; i < n * 4; i++)
	{
		cin >> arr[i].problem >> arr[i]._ >> arr[i].boolean;
	}
	
	for (int i = 0; i < n * 4; i++)
	{
		if (arr[i].boolean == 'T')
		{
			switch (arr[i].problem) 
			{
			case 'A':
				cout << '1';
				break;
			case 'B':
				cout << '2';
				break;
			case 'C':
				cout << '3';
				break;
			case 'D':
				cout << '4';
				break;
			}
		}
	}
	return 0;
}