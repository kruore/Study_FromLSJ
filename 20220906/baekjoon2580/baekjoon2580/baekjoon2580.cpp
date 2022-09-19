#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int Max = 45;
void Sudoku(int sudoku[9][9], vector<pair<int, int>> zeros, int addlines[27]);
bool checker = false;
int main()
{
    int sudokuquestion[9][9];
    int addlines[27] = { 0 };
    vector<pair<int, int>> zeros;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int index = i * 9 + j;
            cin >> sudokuquestion[i][j];
            if (sudokuquestion[i][j] == 0)
            {
                zeros.push_back(make_pair(i, j));
            }
            //가로줄
            addlines[i] += sudokuquestion[i][j];
            //세로줄
            addlines[9 + j] += sudokuquestion[i][j];
            //네모칸
            addlines[18 + (i / 3) * 3 + (j / 3)] += sudokuquestion[i][j];
        }
    }
    Sudoku(sudokuquestion, zeros, addlines);
    return 0;
}
void Sudoku(int sudoku[9][9], vector<pair<int, int>> zeros, int addlines[27])
{
    bool check = true;
    if (zeros.size() == 0)
    {
        if (!checker)
        {
            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    cout << sudoku[i][j] << " ";
                }
                cout << "\n";
            }
            checker = true;
            return;
        }
    }
    else
    {
        int i = 0;
        {
            vector<int> countnumbers = { 1,2,3,4,5,6,7,8,9 };
            for (int j = 0; j < 9; j++)
            {
                if (countnumbers.size() == 0)
                {
                    break;
                }
                int index = zeros[i].first * 9 + j;
                if (sudoku[zeros[i].first][j] != 0)
                {
                    countnumbers.erase(remove(countnumbers.begin(), countnumbers.end(), sudoku[zeros[i].first][j]), countnumbers.end());
                }
                index = j * 9 + zeros[i].second;
                if (sudoku[j][zeros[i].second] != 0)
                {
                    countnumbers.erase(remove(countnumbers.begin(), countnumbers.end(), sudoku[j][zeros[i].second]), countnumbers.end());
                }
                int indexx = (zeros[i].first / 3) * 3 + (j / 3), indexy = (zeros[i].second / 3) * 3 + j % 3;
                if (sudoku[indexx][indexy] != 0)
                {
                    countnumbers.erase(remove(countnumbers.begin(), countnumbers.end(), sudoku[indexx][indexy]), countnumbers.end());
                }
            }
            if (countnumbers.size() != 0)
            {
                for (int j = 0; j < countnumbers.size(); j++)
                {
                    sudoku[zeros[i].first][zeros[i].second] = countnumbers[j];
                    //가로줄
                    addlines[zeros[i].first] += sudoku[zeros[i].first][zeros[i].second];
                    //세로줄
                    addlines[9 + zeros[i].second] += sudoku[zeros[i].first][zeros[i].second];
                    //네모칸
                    addlines[18 + (zeros[i].first / 3) * 3 + (zeros[i].second / 3)] += sudoku[zeros[i].first][zeros[i].second];
                    pair<int, int> a = (zeros[0]);
                    zeros.erase(zeros.begin() + i);

                    Sudoku(sudoku, zeros, addlines);
                    zeros.insert(zeros.begin(), a);
                    sudoku[zeros[i].first][zeros[i].second] = 0;
                    int k = zeros.size(), l = countnumbers.size();

                }
            }
        }
    }
}