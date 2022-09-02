#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    return !b ? a : gcd(b,a % b);
}


int main()
{
    int length;
    cin >> length;

    int insert[101];
    for (int i = 0; i < length; i++)
    {
        cin >> insert[i];
        if (i > 0)
        {
            int fraction = insert[0] / gcd(insert[i], insert[0]);
            int denominator = insert[i] / gcd(insert[i], insert[0]);
            cout << fraction <<"/"<< denominator<<"\n";
        }
    }
}
  