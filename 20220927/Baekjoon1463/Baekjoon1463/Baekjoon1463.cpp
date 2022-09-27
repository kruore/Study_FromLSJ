
#include <iostream>
using namespace std;

int dp[1000001];
int number;
void Solution(int numbers);
int main()
{
	cin >> number;
	Solution(number);
}

void Solution(int numbers)
{
	dp[0]= 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= numbers; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)
		{
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		if (i % 3 == 0)
		{
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}
	cout << dp[numbers];
}