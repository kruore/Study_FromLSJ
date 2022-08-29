#include <iostream>
#include <vector>

using namespace std;



int W, H, X, Y, P;

bool Square(pair<int, int> data)
{
	if (data.first >= X && data.first <= X + W && data.second >= Y && data.second <= Y + H)
	{
		return true;
	}
	return false;
}
int Distance(pair<int, int> a, pair<int, int> b)
{
	return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}
bool Circle(pair<int, int> data)
{
	auto circle = make_pair(X, Y + (H / 2));
	if (Distance(circle, data) <= (H / 2) * (H / 2))
	{
		return true;
	}
	auto circle2 = make_pair(X + W, Y + (H / 2));
	if (Distance(circle2, data) <= (H / 2) * (H / 2))
	{
		return true;
	}
	return false;
}
int main()
{
	int answer = 0;
	cin >> W >> H >> X >> Y >> P;
	for (int i = 0; i < P; i++)
	{
		bool isIn = false;
		int x, y;
		cin >> x >> y;
		pair<int, int> data;
		data = make_pair(x, y);
		
		if (Square(data))
		{
			answer++;
		}
		else if (Circle(data))
		{
			answer++;
		}
	}

	cout << answer;

}
