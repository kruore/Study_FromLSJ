#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <stack>

using namespace std;
void Solution();
void Init();
int _length;
class Stacks
{
public:
	
	void push(int x)
	{
		stacks[pointer] = x;
		pointer++;
	}
	int pop()
	{
		if (pointer == 0)return -1;
		int temp = stacks[pointer-1];
		pointer--;
		return temp;
	}
	int size()
	{
		return pointer;
	}
	int top()
	{
		if (pointer == 0)return -1;
		return stacks[pointer - 1];
	}
	int empty()
	{
		if (pointer == 0)return 1;
		else return 0;
	}
private:
	int stacks[10001] ={0,};
	int pointer = 0;
};

int main()
{
	Init();
}

void Init()
{
	collection;
	Stacks stacks;
	cin >> _length;
	for (int i = 0; i < _length; i++)
	{
		string datas;
		cin >> datas;
		if (datas == "push")
		{
			int values;
			cin >> values;
			stacks.push(values);
		}
		else if (datas == "pop")
		{
			if (stacks.size() != 0)
			{
				cout << stacks.top()<<"\n";
				stacks.pop();
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
		else if (datas == "size")
		{
			cout << stacks.size() << "\n";
		}
		else if (datas == "empty")
		{
			cout << stacks.empty()<<"\n";
		}
		else if (datas == "top")
		{
			cout<<stacks.top()<<"\n";
		}
	}
}