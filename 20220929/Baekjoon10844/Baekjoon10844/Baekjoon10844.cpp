#include <iostream>
#define MAXIMUM 1000000000

using namespace std;
//45654 = 계단 수

int answer;
int _length;
int dp[10] = { 0 , };
int _numberSize;
void Solution();
int main()
{
	cin >> _length;
	Solution();
}
void Solution()
{
	/// 0~ 9까지의 각 마지막 자리의? 0~9까지의 개수를 새면 된다는거잖아?
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 1;
	dp[5] = 1;
	dp[6] = 1;
	dp[7] = 1;
	dp[8] = 1;
	dp[9] = 1;

	for (int i = 1; i < _length; i++)
	{
		int temp[10];
		temp[0] = (dp[1] % MAXIMUM);
		temp[1] = (dp[0] + dp[2]) % MAXIMUM;
		temp[2] = (dp[1] + dp[3]) % MAXIMUM;
		temp[3] = (dp[2] + dp[4]) % MAXIMUM;
		temp[4] = (dp[3] + dp[5]) % MAXIMUM;
		temp[5] = (dp[4] + dp[6]) % MAXIMUM;
		temp[6] = (dp[5] + dp[7]) % MAXIMUM;
		temp[7] = (dp[6] + dp[8]) % MAXIMUM;
		temp[8] = (dp[7] + dp[9]) % MAXIMUM;
		temp[9] = dp[8]% MAXIMUM;
		copy(temp,temp+10,dp);
	}

	for (int i = 0; i < 10; i++)
	{
		answer += dp[i];
		answer=answer% MAXIMUM;
	}

	cout << answer;
}

