#include<cstdio>
#include<cstring>
#include<cctype>

int main() {
	char a[4][70] = {'\0'};
	int lenth[4] = { 0 };
	char DAY = ' ';  //¥ÊDAY
	char HH = ' ';
	int mm = -1;
	for (int i = 0; i < 4; i++)
	{
		scanf("%s", &a[i]);
		lenth[i] = strlen(a[i]);
	}

	int i = 0;
	for (i; i < lenth[0] && i < lenth[1]; i++)
	{
		if (a[0][i] == a[1][i] && (a[0][i] >= 'A') && (a[0][i] <= 'G'))
		{
			DAY = a[0][i];
			break;
		}	
	}
	i = i + 1;
	for (i; i < lenth[0] && i < lenth[1]; i++)
	{
		if (a[0][i] == a[1][i] && ((a[0][i] >= '0' && a[0][i] <= '9') || (a[0][i] >= 'A' && a[0][i] <= 'N')) )
		{
			HH = a[0][i];
			break;
		}
	}

	for (int s = 0; s < lenth[2] && s < lenth[3]; s++)
	{
		if (a[2][s] == a[3][s] && (a[2][s] >= 'a' && a[2][s] <= 'z') || (a[2][s] >= 'A' && a[2][s] <= 'Z'))
		{
			mm = s;
			break;
		}
	}

	switch (DAY) {
	case 'A':
		printf("MON ");
		break;
	case 'B':
		printf("TUE ");
		break;
	case 'C':
		printf("WED ");
		break;
	case 'D':
		printf("THU ");
		break;
	case 'E':
		printf("FRI ");
		break;
	case 'F':
		printf("SAT ");
		break;
	case 'G':
		printf("SUN ");
		break;
	}

	int x = 0;
	if (isalpha(HH))
		x = HH - 'A' + 10;
	else 
		x = HH - '0';
	printf("%02d:%02d", x, mm);
	return 0;
}