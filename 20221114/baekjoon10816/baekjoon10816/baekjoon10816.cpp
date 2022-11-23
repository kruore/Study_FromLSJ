#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int _length, _length2;
void Init();
int cards[500000];
int main()
{
	Init();
}
void Init()
{
	collection;
	cin >> _length;
	for (int i = 0; i < _length; i++)
	{
		cin>>cards[i];
	}
	sort(cards, cards + _length);
	cin >> _length2;
	for (int i = 0; i < _length2; i++)
	{
		int tempcards;
		cin >> tempcards;
		cout << upper_bound(cards, cards + _length, tempcards) - lower_bound(cards, cards + _length, tempcards)<<" ";
	}
}