
#include <iostream>

using namespace std;
int main()
{
    int x1, y1, z1, x2, y2, z2;
    int testcase;
    int answer;
    int circle00, circle01;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        answer = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
        circle00 = (z1 - z2) * (z1 - z2);
        circle01 = (z1 + z2) * (z1 + z2);
        if (answer == 0)
        {
            if (circle00 == 0)
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if (answer == circle00 || answer == circle01)
        {
            cout << "1" << '\n';
        }
        else if (answer > circle00 && answer < circle01)
        {
            cout << "2" << '\n';
        }
        else
        {
            cout << "0" << "\n";
        }
    }

}
