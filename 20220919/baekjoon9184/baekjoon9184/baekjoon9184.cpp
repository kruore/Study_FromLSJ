﻿#include <iostream>


using namespace std;
int answer = 0;
int dp[20][20][20];
int w(int a, int b, int c);
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	std::printf("w(%d,%d,%d) = %d", a, b, c,w(a,b,c));
}

int w(int a, int b, int c)
{
	if (a <= 0 or b <= 0 or c <= 0)
	{
		return 1;
	}
	if (a > 20 or b > 20 or c > 20)
	{
		return w(20, 20, 20);
	}
	if (dp[a][b][c])
	{
		return dp[a][b][c];
	}
	if (a < b and b < c)
	{
		dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		return dp[a][b][c];
	}
	else
	{
		dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
		return dp[a][b][c];
	}
}