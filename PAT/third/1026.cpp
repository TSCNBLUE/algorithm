#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int C1, C2;
	cin >> C1 >> C2;
	int times = round((C2 - C1) / 100.0);
	int hh = 0, mm = 0, ss = 0;
	hh = times / 3600;
	mm = (times - hh * 3600) / 60;
	ss = times - hh * 3600 - mm * 60;
	if (hh < 10)
		cout << setw(2) << setfill('0') << hh << ":";
	else
		cout << hh << ":";
	if (mm < 10)
		cout << setw(2) << setfill('0') << mm << ":";
	else
		cout << mm << ":";
	if (ss < 10)
		cout << setw(2) << setfill('0') << ss;
	else
		cout << ss;
	return 0;
}