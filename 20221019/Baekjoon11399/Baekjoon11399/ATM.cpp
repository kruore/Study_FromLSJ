#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Solution();
void Init();
int length;
vector<int> timeSlot;
int dp[1001];
int main()
{
	Init();
	Solution();
}
void Solution()
{
	sort(timeSlot.begin(),timeSlot.end());
	int sum = 0;
	dp[0] = timeSlot[0];
	for (int i = 1; i < timeSlot.size(); i++)
	{
		dp[i] = dp[i - 1] + timeSlot[i];
	}
	for (int i = 0; i < timeSlot.size(); i++)
	{
		sum += dp[i];
	}
	cout << sum;
}
void Init()
{
	collection;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		int a = 0;
		cin >> a;
		timeSlot.push_back(a);
	}
}