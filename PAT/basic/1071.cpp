#include<iostream>
using namespace std;

struct Game
{
	int n1;    //
	bool b;    //�Ĵ��С
	int t;     //�����ע�ĳ�����
	int n2;    //
};

int main()
{

	int T, K;
	cin >> T >> K;
	int total = T;
	Game* arr = new Game[K];
	for (int i = 0; i < K; i++)
	{
		cin >> arr[i].n1 >> arr[i].b >> arr[i].t >> arr[i].n2;
	}

	for (int i = 0; i < K; i++)
	{
		if (arr[i].t > total)
		{
		cout << "Not enough tokens.  Total = " << total << "." << endl;
		}
		else
		{
			if (((arr[i].n1 < arr[i].n2) && arr[i].b == 1) || ((arr[i].n1 > arr[i].n2) && arr[i].b == 0))
			{
				total += arr[i].t;
				cout << "Win " << arr[i].t << "!  Total = " << total << "." << endl;
			}
			else
			{
				total -= arr[i].t;
				cout << "Lose " << arr[i].t << ".  Total = " << total << "." << endl;
			}
		}
		if (total == 0)
		{
			cout << "Game Over.";
			break;
		}
	}
	return 0;
}