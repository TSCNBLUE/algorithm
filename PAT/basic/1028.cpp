#include<cstdio>

struct Person {
	char name[20];
	int yy, mm, dd;
}old, young, left, right, temp;

bool lessEqu(Person a, Person b) {
	if (a.yy != b.yy) return a.yy <= b.yy;
	else if (a.mm != b.mm) return a.mm <= b.mm;
	else return a.dd <= b.dd;
}

bool moreEqu(Person a, Person b) {
	if (a.yy != b.yy) return a.yy >= b.yy;
	else if (a.mm != b.mm) return a.mm >= b.mm;
	else return a.dd >= b.dd;
}

void init()
{
	young.yy = left.yy = 1814;
	old.yy = right.yy = 2014;
	young.mm = old.mm = left.mm = right.mm = 9;
	young.dd = old.dd = left.dd = right.dd = 6;
}

int main()
{
	init();
	int n, num = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d/%d/%d", &temp.name, &temp.yy, &temp.mm, &temp.dd);
		if (moreEqu(temp, left) && lessEqu(temp, right)) {
			num++;
			if (lessEqu(temp, old)) old = temp;
			if (moreEqu(temp, young)) young = temp;
		}
	}

	if (num == 0) printf("0\n");
	else printf("%d %s %s\n", num, old.name, young.name);
	return 0;
}