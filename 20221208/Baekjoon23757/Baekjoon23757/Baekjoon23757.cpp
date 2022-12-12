#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int _length, _length2;
void Solution();
void Init();
int main()
{
	Init();
}
void Init()
{
	collection;
	priority_queue<int> gift;
	bool flag = true;
	cin >> _length >> _length2;
	for (int i = 0; i < _length; i++)
	{
		int data;
		cin >> data;
		gift.push(data);
	}
	for (int i = 0; i < _length2; i++)
	{
		int data;
		cin >> data;
		if (gift.top() >= data)
		{
			gift.push(gift.top() - data);
			gift.pop();
		}
		else
		{
			flag = false;
		}
	}
	cout << (flag ? 1 : 0) << "\n";
}
