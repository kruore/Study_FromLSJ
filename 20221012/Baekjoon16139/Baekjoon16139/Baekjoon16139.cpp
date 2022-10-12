#include <iostream>
#include <string>
using namespace std;
int _length;
string input;
int spell[200001][27];
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (i != 0)
		{
			for (int j = 0; j < 26; j++)
			{
				spell[i][j] = spell[i - 1][j];
			}
		}
		int now = input[i] - 'a';
		spell[i][now]++;
	}
	cin >> _length;

	for (int i = 0; i < _length; ++i)
	{
		char text;
		int a, b;
		cin >> text;
		cin >> a >> b;
		int now = text - 'a';

		int alphabat00 = a > 0 ? spell[a - 1][now] : 0;
		int alphabat01 = spell[b][now];
		cout << alphabat01 - alphabat00 << "\n";

	}
}