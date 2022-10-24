#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <queue>

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
	queue<int> q;
	cin >> _length;
	for (int i = 1; i <= _length; i++)
	{
		q.push(i);
	}
	while(q.size()>1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();

}