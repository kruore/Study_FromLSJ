#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <stack>

//POP으로 동 배열 만들기ㅋㅋㅋㅋㅋ... 아!

using namespace std;
int _length;
void Solution();
void Init();
int value[100001];
char answer[100001];
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
	stack<int> data;
	collection;
	cin >> _length;
	for (int i = 0; i < _length; i++)
	{
		cin >> value[i];
	}
	int count=0;
	for (int i = 0; i < _length; i++)
	{
		while (count!=value[i])
		{
			count++;

		}
	}

}