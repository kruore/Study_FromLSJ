#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int _length = 0;
void Solution();
void Init();
int main()
{
	Init();
}
void Init()
{
	collection;
	cin >> _length;
	priority_queue<int,vector<int>, greater<int>> min_qp;
	priority_queue<int,vector<int>, less<int>> max_qp;
	for (int i = 0; i < _length; i++)
	{
		int data;
		cin >> data;

		if (max_qp.size() > min_qp.size())
		{
			min_qp.push(data);
		}
		else
		{
			max_qp.push(data);
		}

		if (max_qp.empty() == false && min_qp.empty() == false)
		{
			if (max_qp.top() > min_qp.top())
			{
				int max_value = max_qp.top();
				int min_value = min_qp.top();
				max_qp.pop();
				min_qp.pop();
				max_qp.push(min_value);
				min_qp.push(max_value);
			}
		}	
		cout << "DATA:" << max_qp.top() << "\n";
	}
}


//


//6
// 최대 힙인데 1번째 힙보다는 무조건 작은, 개 중간값은 최소힙의 top();
// 최대 힙 개
// 5 10(top)
// 1 2(top)