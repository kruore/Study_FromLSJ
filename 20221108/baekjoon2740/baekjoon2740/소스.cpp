#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
int N, M, K;
void Init();
void 	Calculate();
int slot[100][100], slot_B[100][100], answer[100][100];
int main()
{
	Init();
}
void Init()
{
	collection;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> slot[i][j];
		}
	}
	cin >> M >> K;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cin >> slot_B[i][j];
		}
	}
	Calculate();
}
void Calculate()
{
	//가로 x 세로 + 가로 x 세로 다음 열
	//가로 다음 줄* 세로 + 가로 다음줄 * 세로 다음 열

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			for (int k = 0; k < M; k++)
			{
				answer[i][j] += slot[i][k] * slot_B[k][j];
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cout << answer[i][j] << ' ';
		}
		cout << '\n';
	}
}