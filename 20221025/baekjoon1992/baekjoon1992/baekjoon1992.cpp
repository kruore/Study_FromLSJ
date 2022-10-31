#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
int _length;
void Solution(int x, int y, int size);
void Init();
string _slot[64];
int main()
{
	Init();
	Solution(_length, 0, 0);
}
void Solution(int size, int y, int x)
{
	char curr = _slot[y][x];
	for (int i = y; i < y + size; i++)
	{
		for (int j = x; j < x + size; j++)
		{
			if (_slot[i][j] != curr)
			{
				cout << '(';
				Solution(size / 2, y, x);
				Solution(size / 2, y, x + size / 2);
				Solution(size / 2, y + size / 2, x);
				Solution(size / 2, y + size / 2, x + size / 2);
				cout << ')';
				return;
			}
		}
	}
	cout << curr;
}
void Init()
{
	collection;
	cin >> _length;
	for (int i = 0; i < _length; i++)
	{
		cin >> _slot[i];
	}
}