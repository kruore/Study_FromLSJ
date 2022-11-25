#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;
ll _length, k;
void Solution();
void Init();
int main()
{
	Init();
	Solution();
}
void Solution()
{

}
void Init()
{
	collection;
	cin >> _length>>k;

	k = min((ll)1000000000, k);

	ll Low = 1;
	ll High = _length * _length;
	ll count;

	while (Low <= High)
	{
		ll Mid = (Low + High) / 2;
		ll sum = 0;
		for (ll i = 1; i <= _length; i++)
		{
			sum += min(Mid / i, _length);
		}
		count = sum;
		if (count >= k)
		{
			High = Mid - 1;
		}
		else
		{
			Low = Mid + 1;
		}
	}
	cout << Low;
}