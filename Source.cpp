//用向量方式实现高精度运算和输出
//源代码将在github上开放 详情见CBYstudio
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a(1,1); 
	for (int n =1; n <= 100; n++)
	{
		for (int m = 0; m <= a.size() - 1; m++)
		{
			a[m] = a[m] * n;
			if (a.back() != 0)
			{				
				a.push_back(0);
				a.push_back(0);
				a.push_back(0);
				a.push_back(0);
			}
			if (m >=1 && a[m - 1] >= 10)
				{
					a[m] += (a[m - 1] - a[m - 1] % 10) / 10;
					a[m - 1] -= a[m - 1] - a[m - 1] % 10;
				}
		}
	}
	while (a.back() == 0) a.pop_back();
	for (int i=a.size()-1;i>=0;i--)
		cout << a[i];
	cout << endl;
	cout << a.size();
	int in;
	cin >> in;
	return 0;
}
