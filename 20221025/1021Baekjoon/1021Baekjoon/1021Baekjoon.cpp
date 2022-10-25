#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <deque>

using namespace std;
int n,m;
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
	cin >> n;
	cin >> m;

	deque<int> q;
	for (int i = 1; i <= n; i++)
	{
		q.push_back(i);
	}

	int num;
	int left,right;
	int count = 0;
	while (m--)
	{
		cin >> num;
		for (int i = 0; i < q.size(); i++)
		{
			if (q[i] == num)
			{
				left = i;
				right = q.size() - i;
				break;
			}
		}
		if (left <= right)
		{
			while (true)
			{
				if (q.front() == num)
				{
					break;
				}
				q.push_back(q.front());
				q.pop_front();
				count++;
			}
			q.pop_front();
		}
		else
		{
			count++;
			while (true)
			{
				if (q.back() == num)
				{
					break;
				}
				q.push_front(q.back());
				q.pop_back();
				count++;
			}
			q.pop_back();
		}
	}
	cout << count;
}