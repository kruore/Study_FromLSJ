#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
void Solution();
void Init();
int _datas[51];
string _data;
int main()
{
	Init();
	Solution();
}
void Solution()
{
	

}
void Init()
{
	collection;
	cin >> _data;
	string data;
	bool isMinus = false;
	int sum = 0;
	for (int i = 0; i <= _data.size(); i++)
	{
		if (_data[i] == '-'||_data[i]=='+'||i==_data.size())
		{
			if (isMinus)
			{
				sum -= stoi(data);
				data = "";
			}
			else
			{
				sum += stoi(data);
				data = "";
			}
		}
		else
		{
			data += _data[i];
		}
		if (_data[i] == '-')
		{
			isMinus = true;
		}
	}
	cout << sum;
}