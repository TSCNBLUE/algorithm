#include<cstdio>
#include<cmath>

int main()
{
	int n;
	char x;
	scanf("%d %c", &n, &x);
	int sum = 1;
	int num = 1;
	for (num; ((num + 1) * (num + 1) / 2 - 1) <= n; num += 2)
	{
		sum = (num + 1) * (num + 1) / 2 - 1;
	}
	num = num - 2;
	int m = num;

	for (int j = 0; j < (num + 1) / 2; j++)
	{
		for (int k = 0; k < j; k++)
			printf(" ");
		for (int k = 0; k < m; k++)
			printf("%c", x);
		printf("\n");
		m = m - 2;
	}

	int s = 3;
	for (int j = (num - 3) / 2; j >= 0; j--)
	{
		for (int k = 0; k < j; k++)
			printf(" ");
		for (int k = 1; k <= s && s <= num; k++)
			printf("%c", x);
		s = s + 2;
		printf("\n");
	}


	printf("%d", n - sum);
	return 0;
}