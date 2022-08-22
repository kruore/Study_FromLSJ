#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	bool checker = true;
	while (true)
	{
		int data[3] = {0,};
		cin >> a >> b >> c;
		data[0] = a;
		data[1] = b;
		data[2] = c;

		sort(data,data+3);

		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		else
		{
			if ((data[0] * data[0]) + (data[1] * data[1]) == (data[2] * data[2]))
			{
				cout << "right" << "\n";
			}
			else
			{
				cout << "wrong" << "\n";
			}
		}
	}
}