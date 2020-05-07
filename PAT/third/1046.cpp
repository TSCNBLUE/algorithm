#include<iostream>
using namespace std;

struct Huaquan
{
	int jia_han;
	int jia_hua;
	int yi_han;
	int yi_hua;
};

int main()
{
	int n;
	cin >> n;
	Huaquan* arr = new Huaquan[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].jia_han >> arr[i].jia_hua >> arr[i].yi_han >> arr[i].yi_hua;
	}

	int count_jia = 0;
	int count_yi = 0;
	if (count_jia == count_yi)
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i].jia_hua == arr[i].jia_han + arr[i].yi_han && arr[i].yi_hua != arr[i].jia_han + arr[i].yi_han)
				count_yi++;
			if (arr[i].yi_hua == arr[i].jia_han + arr[i].yi_han && arr[i].jia_hua != arr[i].jia_han + arr[i].yi_han)
				count_jia++;
		}
	}
	
	cout << count_jia << " " << count_yi;
	return 0;
}