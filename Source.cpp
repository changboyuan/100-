//��������ʽʵ�ָ߾�����������
//Դ���뽫��github�Ͽ��� �����CBYstudio
#include<iostream>
#include<vector>
using namespace std;
int main()
{	
	int cn;
	vector<long long> a(1,1); 
	for (int n =1; n <= 120; n++)
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
