#include <iostream>
using namespace std;

bool here[9] = { 0, };
int slot[9] = { 0, };
void repeat(int repeats, int n, int m)
{
	if (repeats == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << slot[i] << " ";
		}
		cout << "\n";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (!here[i])
			{
				here[i] = true;
				slot[repeats] = i;
				repeat(repeats + 1, n, m);
				here[i] = false;
			}
		}
	}
}


int main()
{
	int n, m;
	cin >> n >> m;

	repeat(0, n, m);

}