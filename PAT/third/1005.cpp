# include<iostream>
using namespace std;

int fun1005()
{
	int n, k=0, m=0;
	cin >> n;
	int numbers[1000];   //������е���
	int* array = new int[n];  //���������
	int* a = new int[n];  //���ظ�����

	for (int i = 0; i < n; i++)   //����Ŀ����
	{
		cin >> array[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)     //��֤�Ƿ���Ҫ����
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
					numbers[k] = n;    //��¼������
					k++;
				}
			}
			
		}

		
	}
	return 0;
}