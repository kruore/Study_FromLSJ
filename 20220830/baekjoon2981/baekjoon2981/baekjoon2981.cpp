#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	return !b ? a : gcd(b, a % b);
}

int main()
{
	int length;
	int min;
	cin >> length;
	int data[101];
	for (int i = 0; i < length; i++)
	{
		cin >> data[i];
	}
	sort(data, data + length);

	min = data[1] - data[0];
	for (int i = 2; i < length; i++)
	{
		min = gcd(min, data[i] - data[i - 1]);
	}
	vector<int> answer;
	for (int i = 2; i * i <= min; i++)
	{
		if (min % i == 0)
		{
			answer.push_back(i);
			answer.push_back(min / i);
		}
	}
	answer.push_back(min);
	sort(answer.begin(), answer.end());
	answer.erase(unique(answer.begin(), answer.end()), answer.end());
	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << " ";
	}
}
