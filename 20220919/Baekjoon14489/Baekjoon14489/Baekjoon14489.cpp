#include <iostream>
using namespace std;


int _length;
int _minValue = 1000000000;
int _tempValue[20][20] = { 0 , };
bool _check[21] = { false ,};
void BackTracking(int count, int index);
int main()
{
    cin >> _length;

    for (int i = 0; i < _length; i++)
    {

        for (int j = 0; j < _length; j++)
        {
            cin >> _tempValue[i][j];
        }
    }
    BackTracking(0,1);
    cout << _minValue;
}

void BackTracking(int count,int index)
{
    if (count == _length / 2)
    {
        int start, link;
        start = 0;
        link = 0;

        for (int i = 0; i < _length; i++)
        {
            for (int j = 0; j < _length; j++)
            {
                if (_check[i] && _check[j])start += _tempValue[i][j];
                if (!_check[i] && !_check[j])link += _tempValue[i][j];
            }
        }
        int temp = abs(start - link);
        if (_minValue > temp) _minValue = temp;
        return;
    }
    for (int i = index; i < _length; i++)
    {
        _check[i] = true;
        BackTracking(count + 1, i + 1);
        _check[i] = false;
    }
}