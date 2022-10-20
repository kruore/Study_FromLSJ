#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);

#include <iostream>
#include <vector>
using namespace std;
void Solution();
void Init();
long long oil_prise[100001];
long long _distance[100001];
long long length, cost = 0;
int main()
{
	Init();
	Solution();
}
void Solution()
{
	//출발 시, 다음 목적지 까지는 무조건 충전해야함
	cost = oil_prise[0] * _distance[0];
	long long cheepGas = oil_prise[0];
	//그 다음부터는 비교로 따지기
	for (int i = 1; i < length - 1; i++)
	{
		cheepGas = min(cheepGas, oil_prise[i]);
		cost += (cheepGas * _distance[i]);
	}
	cout << cost;
}
void Init()
{
	collection;
	cin >> length;
	for (long long i = 0; i < length - 1; i++)
	{
		cin >> _distance[i];
	}
	for (long long i = 0; i < length; i++)
	{
		long long a;
		cin >> oil_prise[i];
	}

}