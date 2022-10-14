#include <iostream>
#include <vector>

using namespace std;
int length;
int divid;
long long datas[1001];

void Init();
int main()
{
	Init();
}
void Init()
{
	long long answer = 0;
	cin >> length >> divid;
	int temp = 0;
	//vector<long long> datas(divid, 0);
	for (int i = 1; i <= length; i++)
	{
		long long num;
		cin >> num;
		temp = (temp + num) % divid;
		datas[temp]++;
		if (temp == 0)
		{
			answer++;
		}
	}
	for (int i = 0; i < 1000; i++)
	{
		if (datas[i] != 0)
		{
			answer += datas[i] * (datas[i] - 1) / 2;
		}
	}
	cout << answer;
}