#include <iostream>


using namespace std;

int dp[1001] = {1,};
int r_dp[1001] = { 1,};
int slot[1001];
int _length;
int top = 0;
void Solution();
int main()
{
	cin >> _length;
	fill_n(dp, 1001, 1);
	fill_n(r_dp, 1001, 1);

	for (int i = 1; i <= _length; i++)
	{
		cin >> slot[i];
	}
	Solution();
}

void Solution()
{

	for (int i = 1; i <= _length; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (slot[j] < slot[i] && dp[i] < dp[j]+1)
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	for (int i = _length; i >=1; i--)
	{
		for (int j = _length; j >= i; j--)
		{
			if (slot[j] < slot[i] && r_dp[j]+1 > r_dp[i])
			{
				r_dp[i] = r_dp[j] + 1;
			}
		}
	}
	int answer= 0;
	for (int i = 0; i <= _length; i++)
	{
		if (answer < dp[i] + r_dp[i] - 1)
		{
			answer = dp[i] + r_dp[i] - 1;
		}
	}
	cout << answer;
}