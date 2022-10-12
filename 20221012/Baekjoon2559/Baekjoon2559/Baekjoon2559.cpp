#include <iostream>
using namespace std;
void init();
int n, m;
int datas[100001];
int maximum=-100000;
int main()
{
	init();
}

void init()
{
	cin >> n >> m;
	datas[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		int data;
		cin >> data;
		datas[i] = datas[i - 1] + data;
	}
	for (int i = m; i <= n; i++)
	{
		maximum = max(maximum, datas[i] - datas[i - m]);
	}
	cout << maximum;
}