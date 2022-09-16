#include <iostream>


using namespace std;

bool here[8] = { 0, };
int slot[8] = { 0, };
int m = 0, n = 0;
void solution(int repeat,int pos)
{
	if (pos == m)
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
			if (!here[i])
			{
				here[i] = true;
				slot[pos] = i;
				solution(i + 1,pos+1);
				here[i] = false;
			}
		}
	}
}


int main()
{
	cin >> n >> m;
	solution(1,0);
}
