#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int n;
int numbers[500001] ={0};

//산술 평균값
int arithmeticMean()
{
	double ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += numbers[i];
	}
	return round(ans/n);
}
// 중앙 값
int centerNumber()
{
	return numbers[(n - 1) / 2];
}
// 최빈에서 2번째 값
int theSecondNumbers()
{
	int result;
	int count = 0;
	int counts[8001] = { 0 };
	for (int i = 0; i < n; i++)
	{
		counts[numbers[i] + (4000)]++;
	}
	int max = *max_element(counts, counts + 8001);
	for (int i = 0; i < 8001; i++)
	{
		if (counts[i] == max)
		{
			count++;
			result = i - 4000;
		}
		if (count == 2)
		{
			break;
		}
	}
	return result;
}
// 범위 출력
int theManyNumbers()
{
	return numbers[n - 1] - numbers[0];
}
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}
	sort(numbers, numbers + n);
	//산술 통계
	cout << arithmeticMean() << '\n';
	// 중앙 값
	cout << centerNumber() << '\n';
	// 최빈값
	cout << theSecondNumbers() << '\n';
	// 빈도수
	cout << theManyNumbers() << '\n';
	return 0;
}
