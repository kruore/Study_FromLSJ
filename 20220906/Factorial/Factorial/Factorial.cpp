// Factorial
#include <iostream>
using namespace std;
int fibonaci(int m)
{
	int answer = 1;
	for (int i = m; i > 0; i--)
	{
		answer *= i;
	}
	return answer;
}

int main()
{

	//팩토리얼
	cout << fibonaci(5)<<"\n";
	//이항 계수
	cout << fibonaci(5) / fibonaci(3) * fibonaci(2)<< "\n";

}