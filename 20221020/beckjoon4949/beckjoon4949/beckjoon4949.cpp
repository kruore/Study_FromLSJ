#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
void Init();
int main()
{
	Init();
}
void Init()
{
	collection;
	while (true)
	{
		string data;
		getline(cin,data);
		if (data.length()==1&&data[0] == '.')
		{
			break;
		}
		stack<char> s;
		bool flag = 0;
		for (int i = 0; i < data.length(); i++)
		{
			char c = data[i];

			if (c == '(' || (c == '['))
			{
				s.push(c);
			}
			else if (c == ')')
			{
				if (!s.empty() && s.top() == '(')
				{
					s.pop();
				}
				else
				{
					flag = 1;
					break;
				}
			}
			else if (c == ']')
			{
				if (!s.empty() && s.top() == '[')
				{
					s.pop();
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0 && s.empty())
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}

	}

}