#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;
int _length,_size;
void Solution();
void Init();
vector<ll> tree;
int main()
{
	Init();
}
void Init()
{
	collection;
	cin >> _length>>_size;
	for (int i = 0; i < _length; i++)
	{
		int datas;
		cin >> datas;
		tree.push_back(datas);
	}

	ll start = 0;
	ll end = *max_element(tree.begin(), tree.end());
	ll result;
	while (start<= end)
	{
		ll answer = 0;
		ll mid = (start + end) / 2;
		for (int i = 0; i < _length; i++)
		{
			if (tree[i] > mid)
			{
				answer += (tree[i] - mid);
			}
		}
		if (answer < _size)
		{
			end = mid - 1;
		}
		else
		{
			result = mid;
			start = mid + 1;
		}
	}
	cout << result;
}