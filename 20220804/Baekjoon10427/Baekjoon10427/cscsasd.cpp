#include <iostream>
#include <vector>

using namespace std;
	int firstnum;
	int datas[500] {0,};
int main()
{
	vector<int> myCard;
	cin >> firstnum;
	for (int i = 0; i < firstnum; i++)
	{
		int a;
		cin >> a;
		cout << a;

		datas[i] = a;
		cout << datas[i];
		cout << i;
		myCard.push_back(datas[i]);
	}
}