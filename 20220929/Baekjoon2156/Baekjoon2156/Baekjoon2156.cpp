
#include <iostream>
using namespace std;

int wine[10001];
int dp[10001];
int length;
void Solution();
int main()
{
	cin >> length;
	for (int i = 1; i <= length; i++)
	{
		cin >> wine[i];
	}
	Solution();
}

void Solution()
{
	dp[1] = wine[1];
	dp[2] = dp[1] + wine[2];
	for (int i = 3; i <= length; i++)
	{
		dp[i] = max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2] + wine[i]);
		dp[i] = max(dp[i - 1], dp[i]);
	}
	cout << dp[length];
}