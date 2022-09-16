#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;
	int cs=0;
	int mod= 0 ,mod2 = 0;
	for (int i = 1; i <= count; i++)
	{
		cs = i;
		while (cs % 2 == 0)
		{
			mod++;
			cs /= 2;
		}
		while (cs % 5 == 0)
		{
			mod2++;
			cs /= 5;
		}

	}
	mod > mod2 ? cout << mod2 : cout << mod;
}