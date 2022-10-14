#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

int a[11];
using namespace std;
void Solution();
void Init();
int main()
{
	Init();
	Solution();
}
void Solution()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int sum = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		sum += m / a[i];
		m = m % a[i];
	}
	cout << sum << "\n";
}
void Init()
{
	collection;
}