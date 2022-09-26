#include <iostream>

// 정수 삼각형의 한 모습이다.
using namespace std;

int length;
int DP[500][1000];
int answer = -1;
int Counting();

int main()
{
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> DP[i][j];
		}
	}
	cout << Counting();
}

int Counting()
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0	; j <= i; j++)
		{
			if (j == 0)
			{
				DP[i][j] = DP[i - 1][0] + DP[i][j];
			}
			else if (i == j)
			{
				DP[i][j] = DP[i - 1][j-1] + DP[i][j];
			}
			else
			{
				DP[i][j] = max(DP[i-1][j-1]+DP[i][j],DP[i-1][j]+DP[i][j]);
			}
			answer = max(answer, DP[i][j]);
		}
	}
	return answer;

}
