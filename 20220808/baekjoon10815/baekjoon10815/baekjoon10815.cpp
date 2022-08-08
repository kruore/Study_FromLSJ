#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a;
    std::cin >> a;

    std::cout << a;

    vector<int> data;

    data.push_back(a);

    cout << data[0];
}
