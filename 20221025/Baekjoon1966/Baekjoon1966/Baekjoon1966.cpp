#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int n, m;
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
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		queue<pair<int, int>> q;
		priority_queue<int> maxImp;
		cin >> n;
		cin >> m;
		for (int j = 0; j < n; j++)
		{
			int data;
			cin >> data;
			q.push(make_pair(j, data));
			maxImp.push(data);
		}
		int printcount = 0;
		while (!maxImp.empty())
		{
			int index = q.front().first;
			int value = q.front().second;
	
			q.pop();
			if (maxImp.top() == value)
			{
				maxImp.pop();
				printcount++;
				if (index == m)
				{
					cout << printcount<<"\n";
					break;
				}
			}
			else
			{
				q.push(make_pair(index, value));
			}
		}
	}
}