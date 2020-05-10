#include<cstdio>
#include<cmath>
#include<iomanip>

int main()
{
	int n = 0, A1 = 0, A2 = 0,  A3 = 0, A5 = 0;
	double A4 = 0;
	bool b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0;
	int a[1100] = { 0 };
	int j = 0;
	int count = 0;
	double sum = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		switch (a[i] % 5)
		{
		case 0:
			if (a[i] % 2 == 0)
			{
				b1 = 1;
				A1 += a[i];
			}
			break;
		case 1:
			A2 = A2 + a[i] * int(pow(-1, j));
			j++;
			b2 = 1;
			break;
		case 2:
			A3++;
			b3 = 1;
			break;
		case 3:
			count += 1;
			sum += a[i];
			A4 = sum / count;
			b4 = 1;
			break;
		case 4:
			if (a[i] > A5)
				A5 = a[i];
			b5 = 1;
			break;
		}
	}

	if (b1 == 1)
		printf("%d ", A1);
	else
		printf("N ");

	if (b2 == 1)
		printf("%d ", A2);
	else
		printf("N ");

	if (b3 == 1)
		printf("%d ", A3);
	else
		printf("N ");

	if (b4 == 1)
		printf("%.1f ", A4);
	else
		printf("N ");

	if (b5 == 1)
		printf("%d", A5);
	else
		printf("N");

	return 0;
}