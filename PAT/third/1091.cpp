#include<iostream>
using namespace std;

int main()
{
	int  M;
	cin >> M;
	int* arr = new int[M];
	int* arrb = new int[M];
	for (int i = 0; i < M; i++)
	{
		cin >> arr[i];
		arrb[i] = arr[i] * arr[i];
	}


	for (int i = 0; i < M; i++)
	{
		int N = 1;
		while (N < 10)
		{
			int result = N * arrb[i];
			if (arr[i] < 10)
			{
				if ((result - arr[i]) % 10 == 0)
				{
					cout << N << " " << arrb[i] * N << endl;
					break;
				}
					
			}
			else if (arr[i] < 100)
			{
				if ((result - arr[i]) % 100 == 0)
				{
					cout << N << " " << arrb[i] * N << endl;
					break;
				}

			}
			else if (arr[i] < 1000)
			{
				if ((result - arr[i]) % 1000 == 0)
				{
					cout << N << " " << arrb[i]*N << endl;
					break;
				}
			}
			N++;
			if (N == 10)
			{
				cout << "No" << endl;
			}
		}
	}
	return 0;
}