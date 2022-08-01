#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int minimum = 1000001;
int maximum = 0;

vector<int> ranks(vector<int>);
int main()
{
	int length;
	cin >> length;
	vector<int> data;
	for (int i = 0; i < length; i++)
	{
		int datas;
		cin >> datas;
		data.push_back(datas);
	}
	data = ranks(data);
}
vector<int> ranks(vector<int> a)
{
	vector<int> sortedData;
	vector<int> rankData;
	sortedData = { a.begin(),a.end() };
	rankData = { a.begin(),a.end() };
	sort(sortedData.begin(), sortedData.end());
	sortedData.erase(unique(sortedData.begin(), sortedData.end()), sortedData.end());
	for (int i = 0; i < rankData.size(); i++)
	{
		cout << lower_bound(sortedData.begin(),sortedData.end(),rankData[i])-sortedData.begin() << ' ';
		rankData[i] = i;
	}
	return rankData;
}
