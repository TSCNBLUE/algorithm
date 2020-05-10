#include<cstdio>

int main()
{
	int e[1010] = { 0 };
	int p[1010] = { 0 };
	int a = 0, b = 0;
	int count = 0;

	while (scanf("%d%d", &a, &b) != EOF)
	{
		e[b] = a; 
	}
	

	for (int i = 1; i <= 1000; i++)
	{
		if (e[i] != 0)
		{
			int temp = e[i] * i;
			int x = i - 1;
			p[x] = temp;
			count++;
		}
	}

	if (count == 0)
		printf("0 0");
	else {
		int m = 1000;
		while (m >= 0)
		{
			if (p[m] != 0)
			{
				printf("%d %d", p[m], m);
				count--;
				if (count != 0)
					printf(" ");
			}
			m--;
		}
	}
	return 0;
}