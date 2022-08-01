#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool compare(pair<int, string>, pair<int, string>){};
int main()
{
	int a;
	cin >> a;

	pair<int,string> data;
	vector<pair<int, string>> dataArr;
	for (int i = 0; i < a; i++)
	{
		cin >> data.first >> data.second;
		dataArr.push_back(data);
	}
	stable_sort(dataArr.begin(), dataArr.end(), compare);
	for (int i = 0; i < a; i++)
	{
		cout << dataArr[i].first<<' '<<dataArr[i].second<<'\n';
	}
}
bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}