#include <iostream>
#include <vector>
#define MAXSIZE 81
#define X_codinate 9
#define Y_codinate 9
using namespace std;

/// <summary>
/// 스도쿠 룰에 따라서 재 규약
/// 1. 스도쿠는 1라인을 따라서 1~9의 숫자를 넣는다.
/// 2. 스도쿠는 9칸을 1~9로 놓는다.
/// 3. 스도쿠는 한번이라도 완성되면 그게 최고라고 둔다.
/// 4. 해당 스도쿠는 백트래킹을 통해 완성할 수 있다.
/// </summary>

int board[X_codinate][Y_codinate] = { 0, };
bool Checker(int x);
void Sudoku(int x);
pair<int, int> combination;
vector<pair<int, int>> remember;
bool check = false;
int main()
{
	//입력
	for (int i = 0; i < X_codinate; i++)
	{
		for (int j = 0; j < Y_codinate; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 0)
			{
				combination.first = i;
				combination.second = j;
				remember.push_back(combination);
			}
		}
	}
	Sudoku(0);
}
void Sudoku(int x)
{
	if (!check)
	{
		if (x == remember.size())
		{
			for (int i = 0; i < X_codinate; i++)
			{
				for (int j = 0; j < Y_codinate; j++)
				{
					cout << board[i][j] << " ";
				}
				cout << "\n";
			}
			check = true;
			return;
		}
		else
		{
			for (int i = 1; i <= 9; i++)
			{
				if (check)
				{
					return;
				}
				board[remember[x].first][remember[x].second] = i;
				if (Checker(x))
				{
					Sudoku(x + 1);
				}
			}
			board[remember[x].first][remember[x].second] = 0;
		}
	}
}
bool Checker(int x)
{
	int square_x = remember[x].first / 3;
	int square_y = remember[x].second / 3;
	for (int i = 0; i < 9; i++)
	{
		//가로
		if (board[remember[x].first][i] == board[remember[x].first][remember[x].second] && i != remember[x].second)return false;
		//세로
		if (board[i][remember[x].second] == board[remember[x].first][remember[x].second] && i != remember[x].first)return false;
	}

	//사각형
	for (int j = square_x * 3; j < (square_x * 3) + 3; j++)
	{
		for (int z = square_y * 3; z < square_y * 3 + 3; z++)
		{
			if (board[j][z] == board[remember[x].first][remember[x].second])
			{
				if (j != remember[x].first && z != remember[x].second)
				{
					return false;
				}
			}
		}
	}
	return true;
}
