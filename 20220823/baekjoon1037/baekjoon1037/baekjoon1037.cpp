#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int counts;
	cin >> counts;
	int data[51];
	for (int i = 0; i < counts; i++)
	{
		cin >> data[i];
	}
	sort(data, data+counts);
	int answer = data[0] * data[counts - 1];
	cout << answer << "\n";

}
