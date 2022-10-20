#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int _length;
void Solution();
void Init();
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
	for (int i = 0; i < _length; i++)
	{
		string data;
		cin >> data;
		stack<char> dataStack;
		for (int j = 0; j < data.size(); j++)
		{
			dataStack.push(data[j]);
		}
		int count = 0;
		bool stop = true;
		for (int j = 0; j < data.size(); j++)
		{
			if (data[j] == '(')
			{
				count++;
			}
			if (data[j] == ')')
			{
				count--;
			}
			dataStack.pop();
			if (count == -1)
			{
				stop = false;
				cout << "NO" << "\n";
				break;
			}
		}
		if (stop)
		{
			if (count != 0)
			{
				cout << "NO" << "\n";
			}
			else
			{
				cout << "YES" << "\n";
			}
		}
	}
}