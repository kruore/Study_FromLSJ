#include <iostream>

using namespace std;

long long memorization[1001][1001];
// Factorial = n * n-1

void result(int n, int k)
{
	memorization[0][0] = 1;
	memorization[1][0] = 1;
	memorization[1][1] = 1;
	int mod = 10007;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				memorization[i][j] = 1;
			}
			else if (j == i)
			{
				memorization[i][j] = 1;
			}
			else
			{
				memorization[i][j] = (memorization[i - 1][j - 1] + memorization[i - 1][j]) % mod;
			}
		}
	}
}

int main()
{
	int n, k;
	cin >> n >> k;
	result(n, k);
	cout << memorization[n][k];
}
