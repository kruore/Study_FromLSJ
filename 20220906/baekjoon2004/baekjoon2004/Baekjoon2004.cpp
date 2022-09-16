#include <iostream>

using namespace std;
long long ans2 = 0;

long long cal2(long long n, long long m, long long two)
{
	long long ans = 0;

	for (long long i = two; i <= n; i *= two)
	{
		ans = n / i;
		ans2 += ans;
		if (i <= m)
		{
			ans2 -= m/i;
		}
		if (i <= n - m)
		{
			ans2 -= (n - m)/i;
		}
	}
	return ans2;
}

int main()
{
	// n! = n * (n-1)!
	long long count, count2;
	cin >> count >> count2;
	long long cs;
	long long twoC = 0, fiveC = 0, twoB = 0, fiveB = 0;
	twoC = cal2(count, count2, 2);
	ans2 = 0;
	fiveC = cal2(count,count2, 5);
	long long answer2 = min(twoC, fiveC);
	cout << answer2;
}