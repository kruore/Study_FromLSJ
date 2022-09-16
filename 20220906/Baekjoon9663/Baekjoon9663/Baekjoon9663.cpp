#include <iostream>


using namespace std;

int queen[15];
int m, answer;

bool solution(int repeat)
{
	for (int i = 0; i < repeat; i++)
	{
		if (queen[repeat] == queen[i] || abs(queen[repeat] - queen[i]) == repeat - i)
			return false;
	}
	return true;
}
void queenPos(int repeat)
{
	if (m == repeat)
	{
		answer++;
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			queen[repeat] = i;
			if (solution(repeat))
			{
				queenPos(repeat + 1);
			}
		}
	}
}

int main()
{
	cin >> m;
	queenPos(0);
	cout << answer;
}