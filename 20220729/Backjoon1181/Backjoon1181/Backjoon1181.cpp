#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool tags(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}

int main()
{
	int dataLen;
	cin >> dataLen;
	vector<string> datas;
	for (int i = 0; i < dataLen; i++)
	{
		string data;
		cin >> data;
		datas.push_back(data);
	}

	sort(datas.begin(), datas.end(), tags);
	datas.erase(unique(datas.begin(), datas.end()), datas.end());
	for (int i = 0; i < datas.size(); i++)
	{
		cout << datas[i] << '\n';
	}
}
