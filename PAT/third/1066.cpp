#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int M, N, A, B, x;
	cin >> M >> N >> A >> B >> x;
	int** p = new int*[M];
	for (int i = 0; i < M; i++)
	{
		p[i] = new int[N];
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> p[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (A <= p[i][j] && p[i][j] <= B)
			{
				p[i][j] = x;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < (N - 1); j++)
		{
			cout <<setw(3)<< setfill('0')<< p[i][j] << " ";
		}
		cout << setw(3) << setfill('0') << p[i][N - 1] << endl;
	}
	return 0;
}