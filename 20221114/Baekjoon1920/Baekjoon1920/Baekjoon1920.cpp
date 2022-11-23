#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

// N 개의 정수 A[1], A[2]... A[N]
// 1~ 100000개
using namespace std;
int _length,_length2;
void Solution(int n, int key);
void Init();
ll dta[100001];

int main()
{
	Init();
}

void Solution(int n, int key)
{
	int start = 0;
	int end = n - 1;
	int mid;

	while (end - start >= 0)
	{
		mid = (start + end) / 2;
		if (dta[mid] == key)
		{
			cout << "1"<<"\n";
			return;
		}
		else if (dta[mid] > key)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	cout << "0" << "\n";
	return;
}
void Init()
{
	collection;
	cin >> _length;
	for (int i = 0; i < _length; i++)
	{
		ll data;
		cin >> dta[i];
	}
	sort(dta, dta + _length);
	cin >> _length2;
	for (int i = 0; i < _length2; i++)
	{
		ll data;
		cin >> data;
		Solution(_length,data);
	}
	
}