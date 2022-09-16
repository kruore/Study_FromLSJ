#include <iostream>

using namespace std;

bool here[7] = { 0, };
int slot[7] = { 0, };
int m = 0, n = 0;
void solution(int repeat,int now)
{
	if (now == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << slot[i] << " ";
		}
		cout << '\n';
	}
	else
	{
		for (int i = repeat; i <= n; i++)
		{

			here[i] = true;
			slot[now] = i;
			solution(i,now + 1);
			here[i] = false;
		}
	}
}


int main()
{
	cin >> n >> m;
	solution(1,0);
}
