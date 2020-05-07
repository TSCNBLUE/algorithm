#include<cstdio>

int main()
{
	int N = 0, M = 0;
	scanf("%d%d", &N, &M);
	int number[110] = { 0 };
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &number[i]);
	}

	M = M % N;
	int count = 0;

	for (int i = N - M; i < N; i++)
	{
		printf("%d", number[i]);
		count++;
		if (count < N)
			printf(" ");
	}

	for (int i = 0; i < N - M; i++)
	{
		printf("%d", number[i]);
		count++;
		if (count < N)
			printf(" ");
	}
	return 0;
}