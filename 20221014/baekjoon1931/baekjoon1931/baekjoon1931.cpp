#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <algorithm>

// job 스케쥴러라고 볼 수 있다.?
using namespace std;
void Solution();
void Init();
int length;
vector<pair<int, int>> meetingRoom;
int main()
{
	Init();
	Solution();
}
void Solution()
{
	sort(meetingRoom.begin(), meetingRoom.end());
	int time = meetingRoom[0].first;
	int count = 1;
	for (int i = 1; i < length; i++)
	{
		if (time <= meetingRoom[i].second)
		{
			count++;
			time = meetingRoom[i].first;
		}
	}
	cout << count;

}
void Init()
{
	collection;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		int a, b;
		cin >> a >> b;
		meetingRoom.push_back(make_pair(b, a));
	}
}