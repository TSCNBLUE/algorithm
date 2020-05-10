#include<cstdio>
#include<iostream>
using namespace std;

struct Game {
	char jia;
	char yi;
};

int main()
{
	int n;
	scanf("%d", &n);
	Game* a = new Game[n];
	int jia[3] = { 0 };
	int yi[3] = { 0 };
	int count_jia = 0, count_ping = 0,count_yi = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i].jia >> a[i].yi;
		if ((a[i].jia == 'C' && a[i].yi == 'J') || 
			(a[i].jia == 'J' && a[i].yi == 'B') || 
			(a[i].jia == 'B' && a[i].yi == 'C'))
		{
			count_jia++;
			if(a[i].jia == 'B')
				jia[0]++;
			else if(a[i].jia == 'C')
				jia[1]++;
			else
				jia[2]++;

		}
		else if (a[i].jia == a[i].yi) {
			count_ping++;
		}
		else {
			count_yi++;
			if (a[i].yi == 'B')
				yi[0]++;
			else if (a[i].yi == 'C')
				yi[1]++;
			else
				yi[2]++;
		}
	}


	printf("%d %d %d\n", count_jia, count_ping, count_yi);
	printf("%d %d %d\n", count_yi, count_ping, count_jia);

	int max_a = 0;
	int max_b = 0;
	int ida = 0, idb = 0;
	for (int i = 0; i < 3; i++) {
		if (jia[i] > max_a) {
			max_a = jia[i];
			ida = i;
		}
			
		if (yi[i] > max_b) {
			max_b = yi[i];
			idb = i;
		}
	}

	char m[3] = { 'B', 'C', 'J' };
	printf("%c %c", m[ida], m[idb]);
	return 0;
}