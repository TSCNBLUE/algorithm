#include<cstdio>

const int Galleon = 29 * 17;
const int Sickle = 29;

int main()
{
	int a1, b1, c1, a2, b2, c2;
	scanf("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
	int p = a1 * Galleon + b1 * Sickle + c1;
	int a = a2 * Galleon + b2 * Sickle + c2;

	int change = a - p;
	if (change < 0) {
		printf("-");
		change = -change;
	}
	int galleon = change / Galleon;
	int sickle = (change - galleon*Galleon) / Sickle;
	int knut = change - galleon * Galleon - sickle * Sickle;
	printf("%d.%d.%d", galleon, sickle, knut);
	return 0;
}