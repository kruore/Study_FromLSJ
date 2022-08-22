#include <iostream>

using namespace std;

int main()
{
    double PI = 3.1415926535897932;
    double r;
    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << r * r * PI << "\n" << 2 * r * r << "\n";
}
