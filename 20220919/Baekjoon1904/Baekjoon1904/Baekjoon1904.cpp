#include <iostream>
#define MAXIMUM_X 15746
using namespace std;

long long dp[1000001];
int N;

int Tile(int count)
{
    for (int i = 3; i <= count; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % MAXIMUM_X;
    }
    return dp[count];
}
int main()
{
    cin >> N;
    dp[1] = 1;
    dp[2] = 2;
 
    cout << Tile(N);
}
