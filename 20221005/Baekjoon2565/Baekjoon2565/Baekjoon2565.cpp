#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int dp[110] = { 1, };
vector<pair<int, int>> datas;
int length;
void solution();
int main()
{
	cin >> length;
	pair<int, int> datainit;
	datainit.first = 0;
	datainit.second = 0;
	datas.push_back(datainit);
	for (int i = 0; i < length; i++)
	{
		pair<int, int> data;
		cin >> data.first >> data.second;
		datas.push_back(data);
	}
	sort(datas.begin(), datas.end());
	solution();
}
void solution()
{
	int answer = 0;
	for (int i = 1; i <= length; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (datas[i].second > datas[j].second)
			{
				if (dp[j] >= dp[i])
				{
					dp[i] =  dp[j] + 1;
				}
			}
		}
		answer = max(answer, dp[i]);
	}
	cout << length - answer+1;
}