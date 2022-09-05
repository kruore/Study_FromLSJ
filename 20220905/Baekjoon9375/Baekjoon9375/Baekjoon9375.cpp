#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{

	int length = 0;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		map<string, int> myMap;
		int wearCout;
		cin >> wearCout;
		for (int j = 0; j < wearCout; j++)
		{
			string cloth, wear;
			cin >> cloth >> wear;
			if (myMap.count(wear) == 0)
			{
				myMap.insert({ wear, 1 });
			}
			else
			{
				myMap[wear]++;
			}
		}
		int answer = 1;
		for (auto x : myMap)
		{
			answer *= x.second + 1;
		}
		answer -= 1;
		cout << answer << "\n";
	}
}