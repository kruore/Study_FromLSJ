#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#define MAX 100001; 
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
typedef long long ll;
int _length = MAX;
int manu[100001] = {0,};
int answer = 108;
void Solution();
void Init();
stack<int> slot;
int main()
{
	Init();
}

void Init()
{
	collection;
	while (true)
	{
		cin >> _length;
		if (_length == 0)
		{
			break;
		}
		for (int i = 0; i < _length; i++)
		{
			cin >> manu[i];
		}
		Solution();
	}
}
void Solution()
{
	
}