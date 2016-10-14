//用向量方式实现高精度运算和输出
//源代码将在github上开放 详情见CBYstudio
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> a(170, 0); 
	int k,l;
	a[160] = 1;
	for (int n =1; n <=100; n++)
	{
		k = n;
		for (k; k > 0; k--)
		{
			for (int m = 170; m--; m > 0)
			{
				a[m] *= 2;
				if (a[m] >= 10)
				{
					a[m] -= 10;
					a[m - 1] += 1;
				}
			}
		}
	}
	int i, x;
	for (i = 0; i<=170; i++)
		cout << a[i] << " ";
	cin >> x;

	return 0;
}
