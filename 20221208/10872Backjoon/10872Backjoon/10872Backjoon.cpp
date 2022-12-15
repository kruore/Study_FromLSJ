#include <iostream>

using namespace std;

int repeat = 0;
int answer = 1;
int Factorial(int data)
{
	if (data >2)
	{
		data *= Factorial(data - 1);
		return data;
	}
}

int main()
{
	cin >> repeat;
	int data = Factorial(repeat);
	cout << data;
}

