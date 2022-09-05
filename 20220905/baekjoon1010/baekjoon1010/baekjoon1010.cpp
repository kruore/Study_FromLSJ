#include <iostream>
#include <vector>

using namespace std;

int remember[31][31];

int main()
{	
	int length, answer = 0;
	cin >> length;
	int left, right;
	for (int i = 0; i <= 30; i++)
	{
		remember[1][i] = i;
	}
	for (int i = 2; i < 30; i++)
	{
		for (int j = i; j < 30; j++)
		{
			for (int k = j - 1; k >= 1; k--)
			{
				remember[i][j] += remember[i - 1][k];
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		cin >> left >> right;
		cout << remember[left][right]<<"\n";
	}
}