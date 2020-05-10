#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int bnum, snum, gnum;
	bnum = num / 100;
	snum = (num-bnum*100) / 10;
	gnum = num - bnum * 100 - snum * 10;
	for (int i = 0; i < bnum; i++)
		cout << "B";
	for (int i = 0; i < snum; i++)
		cout << "S";
	for (int i = 1; i <= gnum; i++)
		cout << i;
	return 0;
}