#include <iostream>

using namespace std;

int dp[41];
int n = 0;
int count_fib = 0, count_fibonacci = 0;

int fib(int n) {
	if (n == 1 || n == 2)
	{
		count_fib++;
		return 1;
	}
	else
	{
		return (fib(n - 1) + fib(n - 2));
	}
}
int fibonacci(int n)
{

	for(int i = 2 ; i<n;i++)
	{
		count_fibonacci++;
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

int main()
{
	cin >> n;
	fib(n);
	dp[0] = dp[1] = 1;
	fibonacci(n);
	cout << count_fib << " " << count_fibonacci;
}