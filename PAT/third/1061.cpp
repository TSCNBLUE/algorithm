#include<iostream>
using namespace std;

int main()
{
	int n, m;     //n个学生，m个课程
	cin >> n >> m;
	int** p = new int*[n+2];     
	int* grade = new int[n];    //n个同学的分数
	for (int i = 0; i < (n+2); i++)
	{
		p[i] = new int[m];
	}

	for (int i = 0; i < (n + 2); i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> p[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		grade[i] = 0;
		for (int j = 0; j < m; j++)
		{
			if (p[i+2][j] == p[1][j])
			{
				grade[i] += p[0][j];
			}
		}
		cout << grade[i] << endl;
	}
	return 0;
}