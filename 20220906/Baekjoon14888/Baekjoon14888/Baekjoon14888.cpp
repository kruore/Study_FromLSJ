#include <iostream>

using namespace std;

int maxia[11];
int arithmetic[4]; 
int length;
int maximum = -1000000001;
int minimum = 1000000001;

void calcualter(int repeater, int index)
{
    if (index == length)
    {
        if (repeater > maximum)
        {
            maximum = repeater;
        }
        if (repeater < minimum)
        {
            minimum = repeater;
        }
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (arithmetic[i] > 0)
        {
            arithmetic[i]--;
            if (i == 0)
            {
                calcualter(repeater + maxia[index], index + 1);
            }
            else if (i == 1)
            {
                calcualter(repeater - maxia[index], index + 1);
            }
            else if (i == 2)
            {
                calcualter(repeater * maxia[index], index + 1);
            }
            else if (i == 3)
            {
                calcualter(repeater / maxia[index], index + 1);
            }
            arithmetic[i]++;
        }
    }
    return;
}




int main()
{
   
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cin >> maxia[i];
    }
    for (int j = 0; j < 4; j++)
    {
        cin >> arithmetic[j];
    }

    calcualter(maxia[0],1);
    cout << maximum << "\n" << minimum;
}