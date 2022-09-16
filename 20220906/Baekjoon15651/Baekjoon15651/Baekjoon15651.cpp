#include <iostream>


using namespace std;

bool here[7] = { 0, };
int slot[7] = { 0, };
int m = 0, n = 0;
void solution(int repeat)
{
	if (repeat == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << slot[i] << " ";
		}
		cout << '\n';
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{

			here[i] = true;
			slot[repeat] = i;
			solution(repeat + 1);
			here[i] = false;
		}
	}
}


int main()
{
	cin >> n >> m;
	solution(0);
}
