#include <iostream>

using namespace std;
int N;
long long dp[101] = {0,1,1,1};
long long Triangle(int here)
{
    dp[4] = dp[5] = 2;
    for (int i = 6; i <= 101; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 5];
    }
    return dp[here];
}
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int data;
        cin >> data;
        cout << Triangle(data)<< "\n";
    }
}

