#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
int N;
void Solution();
void Init();
int sum[501],matrix[501][2],dp[501][501];

int main()
{
	Init();
}
void Init()
{
	collection;
	int maximum = 2147483647;
	cin >> N;
	for(int i=1;i<=N;i++)
	{
		int x=0, y = 0;
		cin >> x >> y;
		matrix[i][0] = x;
		matrix[i][1] = y;
	}
	for (int i = 1; i < N; i++)
	{
		for (int j = 1; i + j <= N; j++)
		{
			dp[j][i + j] = maximum;
			for (int k = j; k <= i + j; k++)
			{
				dp[j][i + j] = min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + matrix[j][0] * matrix[k][1] * matrix[i + j][1]);
			}
		}
	}
	cout << dp[1][N];
}