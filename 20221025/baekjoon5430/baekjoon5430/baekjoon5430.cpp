#define collection cin.tie(0); cout.tie(0),ios_base::sync_with_stdio(false);
#include <iostream>
#include <deque>
#include <string>

using namespace std;
int T, length;
string _data;
void Solution();
string _func;
deque<int> _realData;
void Init();
int main()
{
	Init();
}
void Init()
{
	collection;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		//수행 함수
		cin >> _func;
		//배열에 들어있는 수 개수
		cin >> length;
		cin >> _data;
		bool isError = false;
		bool _reverse = true;

		_data = _data.substr(1, _data.size());
		string dart = "";
		for (int j = 0; j < _data.size(); j++)
		{
			
			if ('0' <= _data[j] && _data[j] <= '9')
			{
				dart += _data[j];
			}
			else if (_data[j] == ',' || _data[j] == ']' && dart != "")
			{
				int insert = atoi(dart.c_str());
				_realData.push_back(atoi(dart.c_str()));
				dart = "";
			}
		}
		for (int j = 0; j < _func.size(); j++)
		{
			if (_func[j] == 'R')
			{
				_reverse = !_reverse;
			}
			else if (_func[j] == 'D')
			{
				if (_realData.empty())
				{
					cout << "error" << "\n";
					isError = true;
					break;
				}
				else
				{
					if (_reverse)
					{
						_realData.pop_front();
					}
					else
					{
						_realData.pop_back();
					}
				}
			}
		}
		if (!isError)
		{
			string answer = "[";
			int _realdataSize = _realData.size();
			for (int z = 0; z < _realdataSize; z++)
			{
				if (_reverse)
				{
					answer += to_string(_realData.front());
					_realData.pop_front();
				}
				else
				{
					answer += to_string(_realData.back());
					_realData.pop_back();
				}
				if (!_realData.empty())
				{
					answer += ",";
				}
			}
			answer += "]";
			cout << answer << "\n";
		}
	}

}