#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
int M, N;
void Solution();
void Init();
int numbers[501][501];
int DP[501][501] = { 0, };
int xl[4] = { -1,0,1,0 };
int yl[4] = { 0,-1,0,1 };
int DFS(int y, int x);
int main()
{
	Init();
}
void Init()
{
	collection;
	cin >> M >> N;
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> numbers[i][j];
			DP[i][j] = -1;
		}
	}
	cout << DFS(M, N);
	//세로줄 비교
}
int DFS(int x, int y)
{
    if (x == 1 && y == 1) return 1;

    if (DP[x][y] == -1) {
        DP[x][y] = 0;

        for (int i = 0; i < 4; i++) {
            int nx = xl[i] + x;
            int ny = yl[i] + y;

            if (nx >= 1 && nx <= M && ny >= 1 && ny <= N) {
                if (numbers[x][y] < numbers[nx][ny])
                    DP[x][y] += DFS(nx, ny);
            }
        }
    }

    return DP[x][y];
}