# include<iostream>
using namespace std;

int fun1005()
{
	int n, k=0, m=0;
	cin >> n;
	int numbers[1000];   //存过程中的数
	int* array = new int[n];  //存输入的数
	int* a = new int[n];  //存重复的数

	for (int i = 0; i < n; i++)   //输入目标数
	{
		cin >> array[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)     //验证是否不需要计算
		{
			if (n == numbers[j])
			{
				a[m] = n;
				m++;
			}
			else
			{
				n = array[i];
				while (n != 1)
				{
					if (n % 2 == 0)
						n = n / 2;
					else
						n = (3 * n + 1) / 2;
					numbers[k] = n;    //记录过程数
					k++;
				}
			}
			
		}

		
	}
	return 0;
}