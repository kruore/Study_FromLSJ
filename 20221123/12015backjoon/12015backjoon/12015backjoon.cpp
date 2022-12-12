#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

//A 가 주어진걸 가장 긴 증가하는 부분 수열을 구하는 프로그램으로 작성
// A 가 주어지고 A의 

using namespace std;
int N;
void Solution();
int A[1000001];
void Init();
int DP[1000001];
int length;
int main()
{
	Init();
	Solution();
}
void Solution()
{

}
void Init()
{
	collection;
	cin >> N;
	int index = 0;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		if (index == 0)
		{
			DP[index++] = temp;
		}
		else
		{
			if (DP[index - 1] < temp)
			{
				DP[index++] = temp;
			}
			else
			{
				DP[lower_bound(DP, DP + index, temp) - DP] = temp;
			}
		}
	}
	cout << index;

}