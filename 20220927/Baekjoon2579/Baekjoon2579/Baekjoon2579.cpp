
#include <iostream>

using namespace std;

void Stepper();
int _DP[301];
int _temp[301];
int _length;
int main()
{
    cin >> _length;
    for (int i = 1; i <= _length; i++)
    {
        cin >> _DP[i];
    }
    Stepper();
}

void Stepper()
{
    _temp[1] = _DP[1];
    _temp[2] = _DP[1]+_DP[2];
    _temp[3] = max(_DP[1] + _DP[3],_DP[2]+_DP[3]);

    for (int i = 4; i <= _length; i++)
    {
        _temp[i] = max(_temp[i - 2] + _DP[i], _temp[i - 3] + _DP[i - 1] + _DP[i]);
    }
    cout << _temp[_length];
}
