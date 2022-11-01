#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
int _length;
void Solution();
void Init();
int zerocount, minuscount, pluscount;
int _dataset[2200][2200];
int answer[3];
int main()
{
	Init();
}
bool Solution(int size, int x,int y)
{
	int _data= _dataset[x][y];
	bool isClear = false;
	int count = 0;
	for (int i = x; i < x + size; i++)
	{
		for (int j = y; j < y + size; j++)
		{
			if (_data != _dataset[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

void divide(int size, int x, int y)
{
	if (Solution(size, x, y))
	{
		int data = _dataset[x][y];
		answer[data + 1]++;
	}
	else
	{
		size /= 3;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				divide(size,x + size * i, y + size * j);
			}
		}
	}
}

void Init()
{
	collection;
	cin >> _length;
	for (int i = 0; i < _length; i++)
	{
		for (int j = 0; j < _length; j++)
		{
			cin >> _dataset[i][j];
		}
	}
	divide(_length,0,0);
	cout << answer[0]<<'\n' << answer[1] << '\n' << answer[2];
}