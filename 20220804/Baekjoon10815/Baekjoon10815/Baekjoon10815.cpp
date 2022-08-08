#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	vector<int> cv;
	int firstNum;
	cin >> firstNum;
	cout << firstNum;
	cv.push_back(firstNum);
	cv.push_back(firstNum);
	cv.push_back(firstNum);
	cv.push_back(firstNum);
	cv.push_back(firstNum);
	cv.push_back(firstNum);


	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	auto iter = v.begin();
	v.erase(iter);
}