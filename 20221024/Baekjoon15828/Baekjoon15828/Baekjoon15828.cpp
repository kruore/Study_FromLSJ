#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <queue>

using namespace std;
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
	int n = 0;
	cin >> n;
	queue<int> q;
	int packet = 0;
	while (packet!=-1)
	{
		cin >> packet;
		if (packet == -1)
		{
			break;
		}
		if (packet == 0)
		{
			q.pop();
		}
		else if(q.size()<n)
		{
			q.push(packet);
		}
	}
	if (q.empty())
	{
		cout << "empty";
	}
	else
	{
		while (true)
		{
			cout << q.front()<<" ";
			q.pop();
			if (q.empty())
			{
				break;
			}
		}
	}

}