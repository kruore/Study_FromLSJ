#include <iostream>

using namespace std;
int max_x;
int dp[100001];
int N;
int answer;
int sum[100001];
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> sum[i];
		dp[i] = sum[i];
	}
	int max_x = dp[0];
	for (int i = 1; i < N; i++)
	{
		dp[i] = max(dp[i], dp[i - 1] + sum[i]);
		if (dp[i] > max_x)
		{
			max_x = dp[i];
		}
	}
	cout << max_x;
}