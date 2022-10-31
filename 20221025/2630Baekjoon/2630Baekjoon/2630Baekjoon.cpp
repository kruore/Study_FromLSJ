#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
int _length;
void Cut(int y, int x, int size);
void Init();
int _datas[128][128];
int blue, white;
int main()
{
	Init();
	Cut(0, 0,_length);
	cout << white << '\n';
	cout << blue << '\n';

}
void Cut(int y, int x, int size)
{
	int check = _datas[y][x];
	for (int i = y; i < y+size; i++)
	{
		for (int j = x; j < x + size; j++)
		{
			if (check == 0 && _datas[i][j] == 1)
			{
				check = 2;
			}
			else if (check == 1 && _datas[i][j] == 0)
			{
				check = 2;
			}
			if (check == 2)
			{
				Cut(y, x, size / 2);
				Cut(y, x+size / 2, size / 2);
			    Cut(y+size / 2,x, size / 2);
				Cut(y + size / 2, x + size / 2, size / 2);
				return;
			}
		}
	}
	if (check == 0)
	{
		white++;
	}
	else
	{
		blue++;
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
			int a = 0;
			cin >> a;
			_datas[i][j] = a;
		}
	}
}