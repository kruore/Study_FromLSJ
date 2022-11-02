#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#define MAX 1000000007
#include <iostream>
#include <vector>

using namespace std;
long long N,K;
long long Solution(long long n, long long k);
void Init();
int main()
{
	Init();
	
}
long long Solution(long long n, long long k)
{
	if (k == 0) return 1;
	return (Solution(n - 1, k - 1) % MAX) + (Solution(n - 1, k) % MAX);
}
void Init()
{
	collection;
	cin >> N>>K;
	long long A=1,B=1;

	for (int i = N; i < N - K + 1; i--)
	{
		A=A*i%MAX;
	}

	for (int j = K; j < 0; j--)
	{
		B = B * j%MAX;
	}

}