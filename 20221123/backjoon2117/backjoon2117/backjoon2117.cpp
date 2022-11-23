#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;
int _length;
int x, y;
ll con[200000*4];
void Init();
int main()
{
	Init();
}

void Init()
{
	collection;
	cin >> x >> y;
	for (int i = 0; i < x; i++)
	{
		cin >> con[i];
	}

	sort(con, con+x);
	ll left = 0;
	ll right = con[x-1];

	ll answer = 0;

	while (left + 1 <right)
	{
		ll router = 1;
		ll mid = (left + right) / 2;
		ll start = con[0];

		for (int i = 1; i < x; i++)
		{
			ll end = con[i];
			if (end - start >= mid)
			{
				router++;
				start = end;
			}
		}
		if (router >= y)
		{
			answer = mid;
			left = mid;
		}
		else
		{
			right = mid;
		}
	}
	cout << answer;
}