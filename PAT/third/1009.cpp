#include<cstdio>
#include<cstring>

int main()
{
	int r = 0, h = 0;
	char ans[90][90] = { '\0' };
	char a;
	while ((a = getchar()) != '\n')
	{
		if (a != ' ') {
			ans[r][h++] = a;
		}
		else {
			r++;
			h = 0;
		}
	}

	for (int i = r; i >= 0; i--)
	{
		printf("%s", ans[i]);
		if (i > 0)
			printf(" ");
	}
	return 0;
}