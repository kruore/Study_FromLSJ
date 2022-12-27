#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
int N,K;
int coins[10000];
int DP[10001];
void Init();
int main()
{
	Init();
}
void Init()
{
	collection;
	cin >> N >> K;
	DP[0] = 1;
	for (int i = 0; i < N; i++)
	{
		cin >> coins[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = coins[i]; j <= K; j++)
		{
			DP[j] += DP[j - coins[i]];
		}
	}
	cout << DP[K] << "\n";
}