#include <iostream>

using namespace std;

int main()
{
	int n, x1, x2, y1, y2, m;
	int count;
	int z1, z2, r;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		cin >> x1 >> y1 >> x2 >> y2 >> m;

		for (int j = 0; j < m; j++)
		{
			cin >> z1 >> z2 >> r;
			int distanceA = (z1 - x1) * (z1 - x1) + (z2 - y1) * (z2 - y1);
			int distanceB = (z1 - x2) * (z1 - x2) + (z2 - y2) * (z2 - y2);
			int length = r * r;
			bool a, b;
			a = distanceA > length ? false : true;
			b = distanceB > length ? false : true;
			if (a != b)
			{
				count++;
			}
		}
		cout << count << "\n";
	}
}
