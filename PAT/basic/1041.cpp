#include<iostream>
using namespace std;

struct Student
{
	string id;
	int num1;
	int num2;
};


int main()
{
	int n;
	cin >> n;
	Student* arr = new Student[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].id >> arr[i].num1 >> arr[i].num2;
	}

	int m;
	cin >> m;
	int* search = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> search[i];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j].num1 == search[i])
			{
				cout << arr[j].id << " " << arr[j].num2 << endl;
			}
		}
		
	}

	return 0;
}