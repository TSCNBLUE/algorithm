#include<iostream>
using namespace std;

struct Student
{
	string name;
	string number;
	int grade;
};

int main()
{
	int max, min, i, max_id=0, min_id=0;
	int n;
	cin >> n;
	Student *array = new Student[n];
	for (int k = 0; k < n; k++)
	{
		cin >> array[k].name;
		cin >> array[k].number;
		cin >> array[k].grade;
	}
	max = array[0].grade;
	min = array[0].grade;
	for (i = 1; i < n; i++)
	{
		if (array[i].grade > max)
		{
			max = array[i].grade;
			max_id = i;
		}
			
		if (array[i].grade < min)
		{
			min = array[i].grade;
			min_id = i;
		}
			
	}
	cout << array[max_id].name << " " << array[max_id].number << endl;
	cout << array[min_id].name << " " << array[min_id].number;
	return 0;
}