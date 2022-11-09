#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
long long _length;
long long N;
void Init();
vector<vector<long long>> Divider(vector<vector<long long>> &slot_a, vector<vector<long long>> &slot_b);
vector<vector<long long>> slot_a(6,vector<long long>(6,0));

int main()
{
	Init();
}
vector<vector<long long>> Divider(vector<vector<long long>> &slot_a, vector<vector<long long>> &slot_b)
{
	vector<vector<long long>> temp(6, vector<long long>(6, 0));
	for (int i = 0; i < _length; i++)
	{
		for (int j = 0; j < _length; j++)
		{
			for (int k = 0; k < _length; k++)
			{
				temp[i][j] += ((slot_a[i][k] * slot_b[k][j]));
			}
			temp[i][j] %= 1000;
		}
	}
	return temp;
}

vector<vector<long long>> pow(vector<vector<long long>> &a, long long b)
{
	if (b == 1) return a;
	vector<vector<long long>> temp = pow(a, b / 2);
	if (b % 2 == 0) return Divider(temp, temp);
	else
	{
		vector<vector<long long>> temp2 = Divider(temp, temp);
		return Divider(temp2, a);
	}
}

void Init()
{
	collection;
	cin >> _length;
	cin >> N;
	for (int i = 0; i < _length; i++)
	{
		for (int j = 0; j < _length; j++)
		{
			cin >> slot_a[i][j];
		    slot_a[i][j] %= 1000;
		}
	}

	vector<vector<long long>> result = pow(slot_a, N);
	for (int i = 0; i < _length; i++)
	{
		for (int j = 0; j < _length; j++)
		{
			cout << result[i][j]<< " ";
		}
		cout << "\n";
	}
}