#include <iostream>

using namespace std;

int factorial(int data)
{
	int answer = 1;
	for (int i = data; i > 0; i--)
	{
		answer *= i;
	}
	return answer;
}

int main()
{
	int n, y;
	cin >> n >> y;
	int result = factorial(n) / (factorial(y) * factorial(n - y));
	cout << result;
}
