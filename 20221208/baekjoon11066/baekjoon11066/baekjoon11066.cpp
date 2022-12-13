#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#define INTMAX 100000000
#include <iostream>
#include <algorithm>
using namespace std;
int _length;
int sum[501] = {0,};
// 최소값 a
int dp[501][501];
void Init();
int main()
{
	Init();
}
void Init()
{
	int t;
	cin >> t;

	while (t--)
	{
		sum[0] = 0;
		int count;
		cin >> count;
		for (int i = 1; i <= count; i++)
		{
			int data;
			cin >> data;
			sum[i] = sum[i - 1] + data;
		}

		for (int i = 1; i <= count; i++)
		{
			for (int j = 1; j <= count-i; j++)
			{
				dp[j][i + j] = INTMAX;
				for (int k = j; k < i + j; k++)
				{
					dp[j][i + j] = min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + sum[i + j] - sum[j - 1]);
				}
			}
		}
		cout << dp[1][count]<<"\n";
	}
}