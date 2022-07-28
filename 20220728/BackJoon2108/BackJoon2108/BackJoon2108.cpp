#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int n;
int numbers[500001] ={0};

//��� ��հ�
int arithmeticMean()
{
	double ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += numbers[i];
	}
	return round(ans/n);
}
// �߾� ��
int centerNumber()
{
	return numbers[(n - 1) / 2];
}
// �ֺ󿡼� 2��° ��
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
// ���� ���
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
	//��� ���
	cout << arithmeticMean() << '\n';
	// �߾� ��
	cout << centerNumber() << '\n';
	// �ֺ�
	cout << theSecondNumbers() << '\n';
	// �󵵼�
	cout << theManyNumbers() << '\n';
	return 0;
}
