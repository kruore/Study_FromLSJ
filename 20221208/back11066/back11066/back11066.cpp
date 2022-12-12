#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
int _length;
void Solution();
int dp[501][501];
int sum[501];
int file[501];
void Init();
int main()
{
	Init();
}
void Init()
{
	int K;
	collection;
	cin >> _length;
	while (_length--)
	{
		cin >> K;
		for (int i = 1; i < K; i++)
		{
			cin >> file[i];
			sum[i] = sum[i - 1] + file[i];
		}
		for (int i = 1; i <= K; i++)
		{
			for (int j = 1; j <= K - i; j++)
			{
				dp[j][i + j] = 10000000;
				for (int z = j; z < i + j; z++)
				{
					dp[j][i + j] = min(dp[j][i + j], dp[j][z] + dp[z + 1][i + j] + sum[i + j] - sum[j - 1]);
				}
			}
		}
		cout << dp[1][K] << "\n";
	}
}