#include<cstdio>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a, b, d;
	scanf("%d%d%d", &a, &b, &d);
	int temp = a + b;
	int z[40], num = 0;
	do {
		z[num++] = temp % d;
		temp = temp / d;
	} while (temp != 0);
	for (int i = num-1; i >= 0; i--)
	{
		printf("%d", z[i]);
	}
	return 0;
}