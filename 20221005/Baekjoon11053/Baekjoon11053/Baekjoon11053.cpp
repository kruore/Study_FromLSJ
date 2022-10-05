#include <iostream>

//DP
using namespace std;

int DP[1002];
int save[1002];
int _length;

void Solution();

int main()
{
    cin >> _length;
    for (int i = 1; i <= _length; i++)
    {
        cin >> save[i];
    }
    Solution();
}

void Solution()
{
    int answer = 0;
    for (int i = 1; i <= _length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (save[i] > save[j] && DP[i] <= DP[j])
            {
                DP[i] = DP[j] + 1;
                if (DP[i] > answer)
                {
                    answer = DP[i];
                }
            }
        }
    }
    cout << answer;
}
