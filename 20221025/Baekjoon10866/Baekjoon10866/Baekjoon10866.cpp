#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
const int MAX = 10000;
using namespace std;
int _length;
void Solution();
void Init();


class Deque
{
private:
	int* deque = {};
	int begin, end;

public:
	Deque(int x)
	{
		deque = new int[x];
		begin = -1;
		end = -1;
	}
	~Deque() {}
	void push_front(int x)
	{
		if (empty())
		{
			begin = 0;
			end = 0;
			deque[begin] = x;
		}
		else
		{
			for (int i = end; i >= begin; i--)
			{
				deque[i + 1] = deque[i];
			}
			deque[begin] = x;
			end++;
		}
	};
	void push_back(int x)
	{
		if (empty())
		{
			begin = 0;
			end = 0;
			deque[begin] = x;
		}
		else
		{
			end++;
			deque[end] = x;
		}
	};
	void pop_front()
	{
		if (empty())
		{
			cout << -1 << "\n";
		}
		else
		{
			cout << deque[begin] << "\n";
			deque[begin] = NULL;
			begin++;
		}
	};
	void pop_back()
	{
		if (empty())
		{
			cout << -1 << "\n";
		}
		else
		{
			cout << deque[end] << "\n";
			deque[end] = NULL;
			end--;
		}
	};
	void size()
	{
		if (empty())
		{
			cout << 0 << "\n";
		}
		else
		{
			cout << end - begin + 1 << "\n";
		}
	};
	bool empty() {
		if (begin == -1 || begin > end)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	void front()
	{
		if (empty())
		{
			cout << -1 << "\n";
		}
		else
		{
			cout << deque[begin] << "\n";
		}
	};
	void back()
	{
		if (empty())
		{
			cout << -1 << "\n";
		}
		else
		{
			cout << deque[end] << "\n";
		}
	}

};


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
	cin >> _length;
	Deque q(_length);
	for (int i = 0; i < _length; i++)
	{
		string datas;
		cin >> datas;
		if (datas == "push_front")
		{
			int values;
			cin >> values;
			q.push_front(values);
		}
		else if (datas == "push_back")
		{
			int values;
			cin >> values;
			q.push_back(values);
		}
		else if (datas == "pop_front")
		{
			q.pop_front();
		}
		else if (datas == "pop_back")
		{
			q.pop_back();
		}
		else if (datas == "size")
		{
			q.size();
		}
		else if (datas == "empty")
		{
			if (q.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
			q.empty();
		}
		else if (datas == "front")
		{
			q.front();
		}
		else if (datas == "back")
		{
			q.back();
		}
	}
}