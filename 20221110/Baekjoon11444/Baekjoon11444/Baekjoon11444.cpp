#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef vector<vector<ll>> vll;
const long long DV = 1000000007;
ll _length;
vll pow(vll& a, vll&b);
void Init();

int main()
{
	Init();
}

vll pow(vll& a, vll& b)
{
	vll c(2, vector<ll>(2));

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			c[i][j] %= DV;
		}
	}
	return c;
}

void Init()
{
	collection;
	cin >> _length;
	// 거듭제곱용 N
	vll matrixs = { { 1,1 }, { 1,0 } };
	//정답 배열
	vll answer = { { 1,0 }, { 0,1 } };

	while (_length > 0)
	{
		if (_length % 2 == 1)
		{
			answer = pow(answer, matrixs);
		}
		matrixs = pow(matrixs, matrixs);

		_length /= 2;
	}

	cout << answer[0][1]<<'\n';
}