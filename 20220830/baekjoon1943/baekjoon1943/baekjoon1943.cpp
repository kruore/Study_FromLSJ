#include <iostream>

using namespace std;

int gdc(int a, int b)
{
	return !b ? a : gdc(b, a%b);
}

int main()
{
	int length;

	cin >> length;
	for (int i = 0; i < length; i++)
	{
		int x, y;
		cin >> x >> y;

		cout << (x*y) / gdc(x, y)<<"\n";
	}
}
