#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

	int a;
	cin >> a;
	vector<vector<int>> data(a, vector<int>(2, 0));
	for (int i = 0; i < a; i++)
	{
		cin >> data[i][1] >> data[i][0];
	}
	sort(data.begin(), data.end());

	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i][1] << " " << data[i][0] << '\n';
	}


}