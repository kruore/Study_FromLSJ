#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <stack>

using namespace std;
stack<int> stacks;
void Init();
int _length;
int sum = 0;
int main()
{
	Init();
}

void Init()
{
	collection;
	cin >> _length;
	for (int i = 0; i < _length; i++)
	{
		int values;
		cin >> values;
		if (values != 0)
		{
			stacks.push(values);
		}
		else
		{
			stacks.pop();
		}
	}
	int size = stacks.size();
	for (int i = 0; i < size; i++)
	{
		sum+=stacks.top();
		stacks.pop();
	}
	cout << sum;
}
