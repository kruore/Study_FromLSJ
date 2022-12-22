#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
int sinker[31];
bool DP[31][31001] = { false, };
void Solution();
void Init();
void DPCalculate(int size);
int main()
{
	Init();
}
void Init()
{
	collection;
	int size = 0;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> sinker[i];
	}
	//Bruth force
	DPCalculate(size);

	int check;
	cin >> check;
	for (int i = 0; i < check; i++)
	{
		int weight = 0;
		cin >> weight;
		if(DP[size-1][15500+weight])
		{
			cout << "Y" << " ";
		}
		else
		{
			cout << "N" << " ";
		}
	}
}
void DPCalculate(int size) {
	DP[0][15500] = true;
	DP[0][15500 - sinker[0]] = true;
	DP[0][15500 + sinker[0]] = true;

	for (int i = 1; i < size; i++) {

		int nowWeight = sinker[i];

		for (int j = 500; j < 30501; j++) {

			DP[i][j] = DP[i - 1][j - nowWeight] || DP[i - 1][j] || DP[i - 1][j + nowWeight];
		}
	}
}