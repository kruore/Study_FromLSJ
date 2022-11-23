#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
ll _size, _length;
void Solution();
void Init();
ll slot[10001] = {0,};
int main()
{
	Init();
}
void Init()
{
	collection;
	ll max = 0;
	cin >> _size >> _length;
	for (int i = 0; i < _size; i++)
	{
		cin >> slot[i];
		if (max < slot[i])max = slot[i];
	}
	sort(slot, slot + _size);

	ll start =1;
	ll end = max;
	ll answer = 0;

	while (start <= end)
	{
		ll mid = (start + end) / 2;
		ll count = 0;
		for (int i = 0; i < _size; i++)
		{
			count += slot[i] / mid;
		}
		if (count >= _length)
		{
			start = mid + 1;
			if (answer < mid)answer = mid;
		}
		else
		{
			end = mid - 1;
		}
	
	}
	cout << answer;
}