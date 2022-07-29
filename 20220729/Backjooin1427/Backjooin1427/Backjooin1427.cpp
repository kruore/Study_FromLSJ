#include <iostream>
#include <string>
#include <vector>

using namespace std;

int datas[10];

int main()
{
	int data;
	int b[10];
	int count = 0;
	cin >> data;
	do {
		b[count] = data % 10;
		count++;
		data=data / 10;
	} while (data != 0);
	for(int i =0; i<count;i++)
	{
		for (int j = i; j < count; j++)
		{
			if (b[i] < b[j])
			{
				int temp = b[j];
				b[j] = b[i];
				b[i] = temp;
			}
		}
		cout << b[i];
	}
}
